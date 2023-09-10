//CHARVY KOSHTA MT20203086
//OPEN FILE CALL FORK THEN WRITE TO IT BY BOTH CHILD AND PARENT
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd;
	char ctext[]="child is wrting this\n";
	char ptext[]="parent is wrting this\n";

	fd=open("testfile.txt", O_CREAT|O_RDWR|O_APPEND,0744);
	if(!fork())
	{
		write(fd,ctext,sizeof(ctext));
	}
	else
	{
		write(fd,ptext,sizeof(ptext));
	}
	close(fd);

	return 0;

}
