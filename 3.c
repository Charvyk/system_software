//Charvy Koshta MT2023086
//3.c program to create file using creat() and print file descriptor value

#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	int fd;
	fd=creat("myfile",O_RDWR);//O_TRUNC if file already exists it overwrites
	if(fd==-1)
	{
		perror("error creating file");
	}
	printf("%d",fd);
	printf("\n");
	close(fd);

	return 0;
}
//cd /proc/pid/fd
//ls -lrt
//lowest fd value will be allotted to newly created file
