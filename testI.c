#include <stdio.h>
#include <mpi.h>
#include <stdlib.h>
#include <string.h> //Testing MPI_Isend
int main(int argc,char *argv[])
{   
    int id,p;
    MPI_Request request,request1;
    MPI_Status status,status1;
    int request_complete=0;
    int request_complete1=0;
    int code;
    MPI_Init(&argc,&argv);
    MPI_Comm_rank(MPI_COMM_WORLD,&id);
    MPI_Comm_size(MPI_COMM_WORLD,&p);
    if(id==0)
    {   
        code = 2910; 
        MPI_Isend(&code,1,MPI_INT,1,0,MPI_COMM_WORLD,&request);
        for(float i=0;i<214748;i=i+0.01)
         {
            MPI_Test(&request,&request_complete,&status); 
            
         }
        if(request_complete!=1)
        {
            MPI_Wait(&request,&status); //wait forces the Isend to act as blocking process
            printf("Process %d had to wait \n",id);
        }
        printf("Process %d has send the code %d\n",id,code);
    }
    else if(id==1)
    {
        MPI_Irecv(&code,1,MPI_INT,0,0,MPI_COMM_WORLD,&request);
        MPI_Wait(&request,&status);
        printf("Process %d has received the code %d\n",id,code);
    }
    else if(id==2)
    {   
        code = 2970;
        MPI_Isend(&code,1,MPI_INT,3,5,MPI_COMM_WORLD,&request1);
        for(float i=0;i<214748;i=i+0.01)
        {
            MPI_Test(&request1,&request_complete1,&status);
        }
        if(request_complete1!=1)
        {
            MPI_Wait(&request1,&status);
            printf("Process %d had to wait\n",id);
        }
        printf("Process %d will send the code value %d\n",id,code);
    }
    else if(id==3)
    {
        MPI_Irecv(&code,1,MPI_INT,2,5,MPI_COMM_WORLD,&request1);
        MPI_Wait(&request1,&status);
        printf("process %d has received the value\n",code);
    }
    fflush(stdout);
    MPI_Finalize();
    return 0;
} 
