#include <mpi.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{   
    int id,p;
    MPI_Init(&argc,&argv);
    MPI_Comm_rank(MPI_COMM_WORLD,&id);
    MPI_Comm_size(MPI_COMM_WORLD,&p);
    printf("%d %d\n",id,p);
    // int x;
    // printf("Enter the value for the data to be send\n");
    // scanf("%d",&x);
    for(int i=0;i<8;i++)
    {
        if(id==0)
        {      
            int x=132323;
            MPI_Send(&x,1,MPI_INT,1,0,MPI_COMM_WORLD);
            printf("Process %d has send the data %d\n",id,x);
        }
        else if(id==1)
        {
            int x;
            printf("This process receives the value\n");
            MPI_Recv(&x,1,MPI_INT,0,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
          //  MPI_Probe(0,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
            printf("Data receive by process %d is %d\n",id,x);
        }
    }
        fflush(stdout);
        MPI_Finalize();
    return 0;
}