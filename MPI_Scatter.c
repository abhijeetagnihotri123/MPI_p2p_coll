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
    int a[12]={132,22,66,77,99,33,55,11,44,88,110,121};
    int x;
    if(id==0)
    {
        MPI_Scatter((a+id),2,MPI_INT,&x,2,MPI_INT,0,MPI_COMM_WORLD);
        printf("Process with id : %d has received %d\n",id,x);
    }
    else if(id==1)
    {   
        int b[2];
        MPI_Scatter((a+id),2,MPI_INT,&b,2,MPI_INT,0,MPI_COMM_WORLD);
        //MPI_Scatter((a+id+1),1,MPI_INT,(b+1),1,MPI_INT,0,MPI_COMM_WORLD);
        printf("Process with id : %d has received %d %d\n",id,b[0],b[1]);
    }
    else if(id==2)
    {
         int c[2];
         MPI_Scatter((a+id),2,MPI_INT,c,2,MPI_INT,0,MPI_COMM_WORLD);
         printf("Process with id : %d has received %d %d \n",id,c[0],c[1]);
    }
    else if(id==3)
    {
         int d[2];
         MPI_Scatter((a+id),2,MPI_INT,d,2,MPI_INT,0,MPI_COMM_WORLD);
         printf("Process with id : %d has received %d %d\n",id,d[0],d[1]);
    }
    else if(id==4)
    {
         int e[2];
         MPI_Scatter((a+id),2,MPI_INT,e,2,MPI_INT,0,MPI_COMM_WORLD);
         printf("Process with id : %d has received %d %d\n",id,e[0],e[1]);
    }
    else if(id==5)
    {   
         int f[2];
         MPI_Scatter((a+id),2,MPI_INT,f,2,MPI_INT,0,MPI_COMM_WORLD);
         printf("Process with id : %d has received %d %d\n",id,f[0],f[1]);
    }
    fflush(stdout);
    MPI_Finalize();
    return 0;
}