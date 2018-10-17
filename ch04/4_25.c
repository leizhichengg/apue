/*************************************************************************
	> File Name: 4_25.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Wed 17 Oct 2018 08:04:38 PM CST
 ************************************************************************/

#include"apue.h"
#include"error.h"
#ifdef SOLARIS
#include<sys/mkdev.h>
#endif

int main(int argc, char *argv[])
{
	int i;
	struct stat buf;

	for (i = 1; i < argc; i++)
	{
		printf("%s: ", argv[i]);
		if (stat(argv[i], &buf) < 0)
		{
			err_ret("stat error");
			continue;
		}

		printf("dev = %d/%d", major(buf.st_dev), minor(buf.st_dev));

		if (S_ISCHR(buf.st_mode) || S_ISBLK(buf.st_mode))
		{
			printf(" (%s) rdev = %d/%d", (S_ISCHR(buf.st_mode)) ? "character" : "block", major(buf.st_rdev), minor(buf.st_rdev));
		}
		printf("\n");
	}
	exit(0);
}
