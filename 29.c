//CHARVY KOSHTA MT2023086
//Program  to get scheduling policy and modify it 
#include<stdio.h>
#include<sched.h>
#include<unistd.h>
int main()
{
	int pid=getpid();
	int curr_policy=sched_getscheduler(pid);

	if(curr_policy==-1)
	{
		printf("not available\n");
	}
	switch(curr_policy)
	{
	 case 0:printf("\n Current policy = SCHED_NORMAL");break;
	 case 1:printf("\n Current policy = SCHED_FIFO");break;
	 case 2:printf("\n Current policy = SCHED_RR");break;
	 case 3:printf("\n Current policy = SCHED_BATCH");break;
	 case 5:printf("\n Current policy = SCHED_IDLE");break;
	 case 6:printf("\n Current policy = SCHED_DEADLINE");break;
	 default:printf("\n error");break;
	}


	struct sched_param p;
        p.sched_priority=10;
        int set_policy=sched_setscheduler(pid, SCHED_FIFO, &p);//returns 0 on success
	
	if(set_policy==0)
	{
		printf("\n policy set  to SCHED_FIFO");
	}
	else
	{
		perror("sched_setscheduler:");
	}

	int new_policy;
	if(sched_getscheduler==1)//for schedfifo
	{
		printf("Policy updated to be SCHED_FIFO\n");
	}
	else
	{
		printf("Policy updation to %d",sched_getscheduler(pid));

	}



return 0;
}				
