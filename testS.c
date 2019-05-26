#include <stdio.h>
#include <mpi.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char *argv[]) // testing MPI_Ssend
{   
    int id,p,code,j;
    double starttime,endtime;
    MPI_Init(&argc,&argv);
    MPI_Comm_rank(MPI_COMM_WORLD,&id);
    MPI_Comm_size(MPI_COMM_WORLD,&p);
    MPI_Request request;
    MPI_Status status;
    printf("%d %d\n",id,p);
    if(id==0)
    {   
        code = 4563;
        starttime=MPI_Wtime();
        MPI_Ssend(&code,1,MPI_INT,1,0,MPI_COMM_WORLD);
        printf("Code %d send by process with id %d\n",code,id);
        endtime=MPI_Wtime();
        MPI_Recv(&j,1,MPI_INT,4,1,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
        printf("Process %d received a message from %d after and send ends in time:%f\n",id,j,endtime-starttime);
    }
    else if(id==1)
    {
        MPI_Recv(&code,1,MPI_INT,0,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
        printf("Code %d received by the process with id %d\n",code,id);
    }
    else if(id==2)
    {
        char msg[101];
        strcpy(msg,"Testing MPI Synchronous Send\n");
        MPI_Ssend(msg,100,MPI_CHAR,3,45,MPI_COMM_WORLD);
        printf("process %d sent an array of integers\n",id);
    }
    else if(id==3)
    {   
        char msg1[101];
        char msg2[101];
        strcpy(msg2,"9956797186");
        MPI_Recv(msg1,100,MPI_CHAR,2,45,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
        starttime=MPI_Wtime();
        MPI_Ssend(msg2,50,MPI_CHAR,5,2,MPI_COMM_WORLD);
        endtime=MPI_Wtime();
       // printf("Process %d received the array of integers\n",id);
      //  printf("The elements in the array are %s\n",msg1);
        printf("Process %d finished in time:%f \n",id,endtime-starttime);
    }
    else if(id==4)
    {   
        int i=id;
        MPI_Ssend(&id,1,MPI_INT,0,1,MPI_COMM_WORLD);
        printf("Process %d sends id as a message to process 0\n",id);
    }
    else if(id==5)
    {   
        char msg3[101];
        MPI_Recv(msg3,50,MPI_CHAR,3,2,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
        printf("Process %d received the message %s \n",id,msg3);
    }
    fflush(stdout);
    MPI_Finalize();
    return 0;
}