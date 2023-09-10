//CHARVY KOSHTA MT2023086
//wap to create zombie process

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{

	if(fork())
	{

		printf("parent process id %d\n",getpid());
		sleep(100);
	}
	else
	{
	
		printf("child process id:%d\n",getpid());
		exit(0);
	}

return 0;
}
