//CHARVY KOSHTA MT202306
//program to create an orpphan process
//#orphan process- a process whose parent no more exists ie terminated without waiting for its child process to terminate
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	int pid=fork();
	if(pid)
	{
		printf("Parent process %d \n",getpid());
	}
	else
	{
		sleep(10);
		printf("Child process%d %d \n", getpid(),getppid());
		while(1);
	}
return 0;

}
