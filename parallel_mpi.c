#include <stdio.h>
#include "mpi.h"
int satisfy(int,int,int,int);
int main(int argc,char *argv[])
{   
    int id,p,s1,namelen,s=0;
    float number,starttime,endtime;
     MPI_Init(&argc,&argv);
     MPI_Comm_rank(MPI_COMM_WORLD,&id);
     MPI_Comm_size(MPI_COMM_WORLD,&p);
    
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<2;j++)
    //     {
    //         for(int k=0;k<2;k++)
    //         {
    //             for(int l=0;l<2;l++)
    //             {   
    //                 if(satisfy(i,j,k,l)==1)
    //                 {
    //                     printf("%d %d %d %d satisfies the solver\n",i,j,k,l);
    //                 }
    //             }
    //         }
    //     }
    // }
    if(id==0)
    {   
        starttime=MPI_Wtime();
        number=-1;
        MPI_Send(&number,1,MPI_FLOAT,1,0,MPI_COMM_WORLD);
        printf("Process %d has send the message\n",id);
        for(int i=1;i<=655;i++)
        {
            s=s+i;
        }
        for(int i=0;i<214748;i++)
        {;}
        endtime=MPI_Wtime();
        printf("Process ended in %f\n",endtime-starttime);
        printf("printing a value s to %d\n",s);
    }
    else if(id==1)
    {
        MPI_Recv(&number,1,MPI_FLOAT,0,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
        printf("Process %d has received\n",id);
    }
    //printf("Hello World! %d %d\n",s,s1);
    printf("Process id and number of processes are\n");
    printf("%d %d\n",id,p);
    fflush(stdout);
    MPI_Finalize();
    return 0;
}
int satisfy(int a,int b,int c,int d)
 {   
     int result = 0;
     if(a==1)
     {
         if(b==1)
         {
             if(c==1 || d==1)
             {
                 result = 1;
             }
         }
     }
     return result;
 }