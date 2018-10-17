/*************************************************************************
	> File Name: 5_13.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Wed 17 Oct 2018 10:26:36 PM CST
 ************************************************************************/

#include"apue.h"
#include"error.h"
#include<errno.h>

void make_temp(char *template);

int main()
{
	char good_template[] = "/tmp/dirXXXXXX";
	char *bad_template = "/tmp/dirXXXXXX";

	printf("trying to creat first temp file...\n");
	make_temp(good_template);
	printf("trying to creat second temp file...\n");
	make_temp(bad_template);
	exit(0);
}

void make_temp(char *template)
{
	int fd;
	struct stat sbuf;

	if ((fd = mkstemp(template)) < 0)
		err_sys("can't creat temp file");
	printf("temp name = %s\n", template);
	close(fd);
	if (stat(template, &sbuf) < 0)
	{		
		if (errno == ENOENT)
			printf("file doesn't exist\n");
		else
			err_sys("stat failed");
	}
	else
	{
		printf("file exists\n");
		unlink(template);
	}
}

