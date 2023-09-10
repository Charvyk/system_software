//Charvy Koshta MT2023086
//Program to run a script at a specific time using daemon process
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>

int main(int argc, char* argv[])
{

	time_t currtime,runtime;
	struct tm *tim;
	if(argc<2)
	{
		printf("enter time arg:");
	}
	else
	{
		time(&currtime);
		tim=localtime(&currtime);
		tim->tm_sec = atoi(argv[1]);
		runtime=mktime(tim);
	

		if(!fork)
		{	
			//daemon process
			setsid();
			chdir("/");
			umask(0);
			do
			{
				time(&currtime);
			}
			while((runtime-currtime)>0);
		
			printf("\n printing after %s seconds have passed. ", argv[1]);
			exit(0);
		}

	}
	return 0;
}
