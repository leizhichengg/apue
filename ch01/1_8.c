/*************************************************************************
	> File Name: 1_8.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Fri 12 Oct 2018 04:40:07 PM CST
 ************************************************************************/

#include"apue.h"
#include<errno.h>

int main(int argc, char *argv[])
{
	fprintf(stderr, "EACCES: %s\n", strerror(EACCES));
	errno = ENOENT;
	perror(argv[0]);
	exit(0);
}
