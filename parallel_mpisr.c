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
 	  MPI_Send(&number,1,MPI_FLOAT,24,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==1)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,25,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==2)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,26,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==3)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,27,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==4)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,28,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==5)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,29,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==6)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,30,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==7)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,31,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==8)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,32,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==9)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,33,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==10)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,34,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==11)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,35,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==12)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,36,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==13)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,37,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==14)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,38,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==15)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,39,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==16)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,40,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==17)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,41,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==18)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,42,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==19)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,43,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==20)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,44,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==21)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,45,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==22)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,46,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==23)
	{
	  starttime=MPI_Wtime();
	  number = -1;
	  for(float i=0;i<215403;i=i+0.01)
	  {
    	    //delay the finishing of the process by this auxillary loop  
	  }
 	  MPI_Send(&number,1,MPI_FLOAT,47,0,MPI_COMM_WORLD);
	  printf("Process %d has send the message\n",id);	
	  endtime=MPI_Wtime();
	  printf("Process %d has finished in %f time\n",id,endtime-starttime);	
	}
	else if(id==24)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,0,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==25)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,1,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==26)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,2,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==27)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,3,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==28)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,4,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==29)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,5,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==30)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,6,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==31)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,7,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==32)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,8,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==33)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,9,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==34)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,10,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==35)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,11,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==36)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,12,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==37)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,13,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==38)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,14,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==39)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,15,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==40)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,16,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==41)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,17,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==42)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,18,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==43)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,19,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==44)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,20,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==45)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,21,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==46)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,22,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	else if(id==47)
	{
	   MPI_Recv(&number,1,MPI_FLOAT,23,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	   printf("Process %d has received the message\n",id);	
	}
	MPI_Finalize();
	return 0;
}
