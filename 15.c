#include <stdio.h>
#include<unistd.h>
int main (int argc, char *argv[], char *envp[] )
{
	for(int i=0;envp[i]!=NULL; i++)
		printf("\n%s",envp[i]);

	getchar();
	
//	char *log_dir = getenv("LOG_DIR");
//	printf("LOG_DIR:\n%s\n",log_dir);

	return 0;
}


//env define the behaviour of thr environment
//environ points to an array of pointers to strings called the "environment".
//the last pointer in this array has value NULL
//
// USER PATH HOME PWD HOSTNAME LANG EDITOR UID SHELL
// echo $PWD
// echo $SHELL
// printenv or env
