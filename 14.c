#include<unistd.h>
#include<stdio.h>
#include<sys/stat.h>

int main(void)
{
	struct stat s;
	char filename[50];
	scanf("%s",filename);
	stat("filename", &s);
//	printf("file type:%s\n",s.st_mode);
	switch(s.st_mode & S_IFMT)
	{
		case S_IFBLK:  printf("Block device\n"); break;
		case S_IFCHR:  printf("Character device\n"); break;
		case S_IFDIR:  printf("Directory device\n"); break;
		case S_IFIFO:  printf("FIFO pipe\n"); break;
                case S_IFLNK:  printf("SYMLINK\n"); break;
                case S_IFREG:  printf("Regular file\n"); break;
	        case S_IFSOCK: printf("socket\n"); break;
                default      : printf("unknown\n"); break;		      
				
	}

	return 0;
}

