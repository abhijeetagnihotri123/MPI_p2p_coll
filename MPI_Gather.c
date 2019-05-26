#include <mpi.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main(int argc,char *argv[])
{   
    int id,p;
    MPI_Init(&argc,&argv);
    MPI_Comm_rank(MPI_COMM_WORLD,&id);
    MPI_Comm_size(MPI_COMM_WORLD,&p);
    printf("%d %d\n",id,p);
    int x[6];
    if(id==0)
    {   
        int y=1453;
        double starttime,endtime;
        starttime=MPI_Wtime();
        MPI_Gather(&y,1,MPI_INT,x,1,MPI_INT,0,MPI_COMM_WORLD);
        for(int i=0;i<6;i++)
        {
            printf("Process %d has gathered the value %d\n",id,x[i]);
        }
        endtime=MPI_Wtime();
        printf("Process %d has Gathered all values and ended in %fs time",id,endtime-starttime);
    }
    else if(id==1)
    {
        int y=14578;
        MPI_Gather(&y,1,MPI_INT,(x+id),1,MPI_INT,0,MPI_COMM_WORLD);
    }
    else if(id==2)
    {
        int y=1413;
        MPI_Gather(&y,1,MPI_INT,(x+id),1,MPI_INT,0,MPI_COMM_WORLD);
    }
    else if(id==3)
    {
        int y=13573;
        MPI_Gather(&y,1,MPI_INT,(x+id),1,MPI_INT,0,MPI_COMM_WORLD);
    }
    else if(id==4)
    {
        int y=14;
        MPI_Gather(&y,1,MPI_INT,(x+id),1,MPI_INT,0,MPI_COMM_WORLD);
    }
    else if(id==5)
    {
        int y=148;
        MPI_Gather(&y,1,MPI_INT,(x+id),1,MPI_INT,0,MPI_COMM_WORLD);
    }
    fflush(stdout);
    MPI_Finalize();
    return 0;
}