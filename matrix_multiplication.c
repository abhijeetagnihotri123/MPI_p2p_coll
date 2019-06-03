#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#define N 8
int a[N][N],b[N][N],c[N][N];  
void assign_matrix(int X[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            X[i][j]=i+j;
        }
    }
}
int main(int argc,char *argv[])
{   
    int id,numprocess,offset,numworkers;
    MPI_Init(&argc,&argv);
    MPI_Comm_rank(MPI_COMM_WORLD,&id);
    MPI_Comm_size(MPI_COMM_WORLD,&numprocess);
    if(id==0)
    {   
        numworkers=numprocess-1;
        assign_matrix(a);
        assign_matrix(b);
        if(N%numworkers==0)
        {
            MPI_Bcast(a,N*N,MPI_INT,0,MPI_COMM_WORLD);
            MPI_Bcast(b,N*N,MPI_INT,0,MPI_COMM_WORLD);
            MPI_Bcast(c,N*N,MPI_INT,0,MPI_COMM_WORLD);    
            for(int i=1;i<numprocess;i++)
            {
                MPI_Send(&numworkers,1,MPI_INT,i,1,MPI_COMM_WORLD);
            }
            for(int i=1;i<numprocess;i++)
            {
                int f=(i-1)*N/numworkers;
                int t=f+N/numworkers;
                for(int j=f;j<t;j++)
                {
                    MPI_Recv(c[j],N,MPI_INT,i,2,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
                }
            }   
            printf("Output matrix is\n");
            for(int i=0;i<N;i++)
            {
                for(int j=0;j<N;j++)
                {
                    printf("%d ",c[i][j]);
                }
                printf("\n");
            }
        }
        else
        {   
            MPI_Finalize();
            exit(-1);
        }
    }
    else
    {   
        int n;
        MPI_Bcast(a,N*N,MPI_INT,0,MPI_COMM_WORLD);
        MPI_Bcast(b,N*N,MPI_INT,0,MPI_COMM_WORLD);
        MPI_Bcast(c,N*N,MPI_INT,0,MPI_COMM_WORLD);
        MPI_Recv(&n,1,MPI_INT,0,1,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
        int from = N*(id-1)/n;
        int till = N*(id)/n;
        //printf("%d %d\n",from,till);
        for(int i=from;i<till;i++)
        {
             for(int j=0;j<N;j++)
             {
                 c[i][j]=0;
                 for(int k=0;k<N;k++)
                 {
                     c[i][j]+=a[i][k]*b[k][j];
                 }
             }
        }
        for(int i=from;i<till;i++)
        {
            MPI_Send(c[i],N,MPI_INT,0,2,MPI_COMM_WORLD);
        }
    }
    fflush(stdout);
    MPI_Finalize();
    return 0;
}