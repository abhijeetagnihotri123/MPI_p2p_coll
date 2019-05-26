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
    int a[8]={54,123,12,67,89,22,90,81};
    int sum;
    if(id==0)
    {
        MPI_Reduce(a,&sum,1,MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);
        printf("%d is the root value with reduced value %d\n",id,sum);
    }
    else if(id==1)
    {
        MPI_Reduce((a+id),&sum,1,MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);
    }
    else if(id==2)
    {
        MPI_Reduce((a+id),&sum,1,MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);
    }
    else if(id==3)
    {
        MPI_Reduce((a+id),&sum,1,MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);
    }
    else if(id==4)
    {
        MPI_Reduce((a+id),&sum,1,MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);
    }
    else if(id==5)
    {
        MPI_Reduce((a+id),&sum,1,MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);
    }
    else if(id==6)
    {
        MPI_Reduce((a+id),&sum,1,MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);
    }
    else if(id==7)
    {
        MPI_Reduce((a+id),&sum,1,MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);
    }
    fflush(stdout);
    MPI_Finalize();
    return 0;
}