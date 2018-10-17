/*************************************************************************
	> File Name: 4_12.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Mon 15 Oct 2018 05:09:33 PM CST
 ************************************************************************/

#include"apue.h"
#include"error.h"

int main(void)
{
	struct stat statbuf;

	if (stat("foo", &statbuf) < 0)
		err_sys("stat error for foo");
	if (chmod("foo", (statbuf.st_mode & ~S_IXGRP) | S_ISGID) < 0)
		err_sys("chmod error for foo");

	if (chmod("bar", S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) < 0)
		err_sys("chmod error for bar");
	exit(0);
}
