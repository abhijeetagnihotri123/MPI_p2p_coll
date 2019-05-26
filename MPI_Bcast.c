#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv[])
{   
    int id,p,data;
    double starttime,endtime;
    MPI_Init(&argc,&argv);
    starttime=MPI_Wtime();
    MPI_Comm_rank(MPI_COMM_WORLD,&id);
    MPI_Comm_size(MPI_COMM_WORLD,&p);
    endtime=MPI_Wtime();
    printf("%d %d %f\n",id,p,endtime-starttime);
    if(id==0)
    {
        data=6791;
        MPI_Bcast(&data,4,MPI_INT,0,MPI_COMM_WORLD);
        printf("Root Process with rank %d has broadcasted the value to all other processes\n",id);
    }
    else if(id==1)
    {   
         int x1;
         MPI_Bcast(&x1,4,MPI_INT,0,MPI_COMM_WORLD);
         printf("Process %d received the value %d through MPI_Bcast\n",id,x1);
    }
    else if(id==2)
    {   
         int x2;
         MPI_Bcast(&x2,4,MPI_INT,0,MPI_COMM_WORLD);
         printf("Process %d received the value %d through MPI_Bcast\n",id,x2);
    }
    else if(id==3)
    {   
         int x3;
         MPI_Bcast(&x3,4,MPI_INT,0,MPI_COMM_WORLD);
         printf("Process %d received the value %d through MPI_Bcast\n",id,x3);
    }
    else if(id==4)
    {   
         int x4;
         MPI_Bcast(&x4,6,MPI_INT,0,MPI_COMM_WORLD);
         printf("Process %d received the value %d through MPI_Bcast\n",id,x4);
    }
    else if(id==5)
    {   
         int x5;
         MPI_Bcast(&x5,6,MPI_INT,0,MPI_COMM_WORLD);
         printf("Process %d received the value %d through MPI_Bcast\n",id,x5);
    }
    fflush(stdout);
    MPI_Finalize();
    return 0;
}