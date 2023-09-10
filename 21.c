//CHARVY KOSHTA MT2023086
//wap to print parent and child process id

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{

	if(fork())
	{

		printf("parent process id %d\n",getpid());
	//	wait(0);
	}
	else
	{
	//	wait(0);
		printf("child process id:%d\n",getpid());
	}

return 0;
}
