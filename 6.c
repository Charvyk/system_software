#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int fd;
	char buf[80];
	fd=open("newfile", O_RDONLY);
	read(fd,buf ,sizeof(buf));
	printf("%s\n",buf);
}
