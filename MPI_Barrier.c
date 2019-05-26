#include <mpi.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc,char *argv[])
{   
    int id,p;
    double endtime,starttime;
    MPI_Init(&argc,&argv);
    MPI_Comm_size(MPI_COMM_WORLD,&p);
    MPI_Comm_rank(MPI_COMM_WORLD,&id);
    starttime=MPI_Wtime();
    if(id==0)
    {   
        double s1,e1;
        s1=MPI_Wtime();
        for(int i=0;i<214748;i++)
        {/*Start the timer*/}
        e1=MPI_Wtime();
        printf("Process %d ended in time %f\n",id,e1-s1);
    }
    else if(id==1)
    {
        double s2,e2;
        s2=MPI_Wtime();
        for(float i=0;i<214748;i=i+0.01)
        {/*Start the timer*/}
        e2=MPI_Wtime();
        printf("Process %d ended in time %f\n",id,e2-s2);
    }
    else if(id==2)
    {
        double s3,e3;
        s3=MPI_Wtime();
        for(double i=1;i<214748;i=i/(0.01))
        {/*Start the timer*/}
        e3=MPI_Wtime();
        printf("Process %d ended in time %f\n",id,e3-s3);
    }
    endtime=MPI_Wtime();
    MPI_Barrier(MPI_COMM_WORLD);
    printf("Synchronization took %fs time\n",endtime-starttime);
    fflush(stdout);
    MPI_Finalize();
    return 0;
}