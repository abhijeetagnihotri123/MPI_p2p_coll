#include <mpi.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc,char *argv[])
{
     int id,p,bufsize,bsize;;
     float number;
     double starttime,endtime;
     int s1;//my buffer sizes
     char *buf,*bbuf;
     char msg1[7];
     MPI_Init(&argc,&argv);
     MPI_Comm_rank(MPI_COMM_WORLD,&id);
     MPI_Comm_size(MPI_COMM_WORLD,&p);
     MPI_Pack_size(7,MPI_CHAR,MPI_COMM_WORLD,&s1);
     printf("Process id and number of processes are %d %d\n",id,p);		
     printf("The individual buffer sizes are %d\n",s1);
     bufsize = 10000 * (MPI_BSEND_OVERHEAD+4) + s1;
     int default_buf_size = MPI_BSEND_OVERHEAD + 4;
     printf("The default buffer size before adding is %d\n",default_buf_size);
     printf("Total buffer size is %d \n",bufsize);
     buf = (char*)malloc(bufsize);
     MPI_Buffer_attach(buf,bufsize);
     strcpy(msg1,"012346");
     printf("Message to be send and received is %s\n",msg1);
     if(id==0)
     {
	  starttime=MPI_Wtime();
	  //number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Bsend(msg1,7,MPI_CHAR,1,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
     }
     else if(id==1)
     {
	  MPI_Recv(msg1,7,MPI_CHAR,0,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	  printf("Process %d has received the message %s\n ",id,msg1);
     }
     MPI_Buffer_detach(&bbuf,&bsize);
     fflush(stdout);
     MPI_Finalize();
     return 0;
}
