#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	fd_set rfds;
	struct timeval tv;
	int retval;

	FD_ZERO(&rfds);//removes all file descriptors from set.first step in initializing a file descriptor set
	FD_SET(0,&rfds);//adds file descriptor fd to set.

	tv.tv_sec=5;
	tv.tv_usec=0;
	retval=select(1, &rfds, NULL, NULL, &tv);

	if(retval)
		printf("\nData is available within 5 seconds...\n");
		else
		printf("\nData is NOT available within 5 seconds...\n");

	return 0;
}
//struct timeval{
//time_t tv_sec; //represents elapsed time in wholeseconds 
//suseconds_t tv_usec;//captures rest of elapsed time in microsec
//};
//
//select arguments
//readfds: file descriptors in this set are watched to see if they are ready for reading.ready=if read opr willl not block, fd also ready on eof
//writefds
//exceptfds
//ndfs highest number file descriptor+1
//timeout:timeval structure , specifies the interval that select should block waiting for fd to become ready
//the call will block until either
//fd becomes ready
//call is interrupted by signal handler
//timeout expires
//
//return value of select
//success:no of fd contained in 3 returned descroptor sets / total no of set bits in readfds wrutefds exceptfds
//zero:timeout expired
//-1:error
