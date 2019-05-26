#include <mpi.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{	
	int id,p,s1,s2;
	float number;
	double starttime,endtime;
	char msg1[17];
	char msg2[17];
	strcpy(msg1,"1234567");
    strcpy(msg2,"2345678");
	char *buf,*bbuf;
	int bufsize,bsize;
	MPI_Init(&argc,&argv);
	MPI_Comm_rank(MPI_COMM_WORLD,&id);
	MPI_Comm_size(MPI_COMM_WORLD,&p);
	MPI_Pack_size(7,MPI_INT,MPI_COMM_WORLD,&s1);
    MPI_Pack_size(7,MPI_INT,MPI_COMM_WORLD,&s2);
	bufsize = 3 * MPI_BSEND_OVERHEAD + s1 + s2;
	buf = (char*)malloc(bufsize);
	MPI_Buffer_attach(buf,bufsize);
	printf("%d %s\n",bufsize,buf);
	MPI_Buffer_detach(&bbuf,&bsize);
	MPI_Status stat;
	if(id==0)
	{
		MPI_Bsend(msg1,7,MPI_CHAR,1,0,MPI_COMM_WORLD);
		printf("process %d has send the message %s\n",id,msg1);
		MPI_Recv(msg2,7,MPI_CHAR,1,23,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
        printf("Process %d has received the message %s\n",id,msg2);
	}
	else if(id==1)
	{
		MPI_Recv(msg1,7,MPI_CHAR,0,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
		printf("process %d has received the message %s\n",id,msg1);
        MPI_Bsend(msg2,7,MPI_CHAR,0,23,MPI_COMM_WORLD);
        printf("Process %d has now send the message %s\n",id,msg2);
    }
	printf("%d\n",bsize);
    MPI_Buffer_detach(&bbuf,&bsize);
	fflush(stdout);
	MPI_Finalize();
	return 0;
}
