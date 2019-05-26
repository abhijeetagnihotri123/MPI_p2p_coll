#include <mpi.h>
#include <stdio.h>
int main(int argc,char *argv[])
{	
	int id,p;
	float number;
	double starttime,endtime;
	MPI_Init(&argc,&argv);
	MPI_Comm_rank(MPI_COMM_WORLD,&id);
	MPI_Comm_size(MPI_COMM_WORLD,&p);
	//printf("%d %d\n",id,p);
	if(id==0)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,1,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==1)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,0,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d here\n",id);
	   printf("Process %d has received the message\n",id);
	}
	MPI_Finalize();
	return 0;
}
