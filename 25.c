//CHARVY KOSHTA MT2023086
//25.c program to create 3 child process. parent should wait for particular child using waitpid
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
	int c1,c2,c3;
	c1=fork();

	if(c1==0)
	{
		printf("\ninside child process 1 PID=%d",getpid());
		printf("\n\nchild process 1 sleeping ");
		sleep(10);
		printf("\nchild1 exits");

	}
	else if((c2=fork())==0)
        {
                printf("\ninside child process 2 PID=%d",getpid());
                printf("\nchild process 2 sleeping ");
                sleep(12);
                printf("\nchild2 exits");

        }
	else if((c3=fork())==0)
        {
                printf("\ninside child process 3 PID=%d",getpid());
                printf("\nchild process 3 sleeping ");
                sleep(5);
                printf("\nchild3 exits");

        }
	else
	{
		int p=waitpid(c1,NULL,0);
		printf("\nExisting from parent process");
	}

	return 0;
}
