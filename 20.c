//CHARVY KOSHTA MT2023086
//PROGRAM TO FIND PRIORITY OF RUNNING PROGRAM AND MODIFY IT WITH NICE
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char * argv[])

{
	int pr1,pr2;
	if(argc<2)
	{
		printf("enter priority of program:");
	}
	else
	{
		pr2=atoi(argv[1]);
		pr1=nice(0);
		int pid=getpid();
		printf("current priority of process %d = %d\n",pid , pr1);
		pr1=nice(pr2);
		printf("new priority of processs is %d\n",pr1);

		getchar();
	}
	return 0;
}
