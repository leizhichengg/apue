/*************************************************************************
	> File Name: 4_9.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Mon 15 Oct 2018 04:58:58 PM CST
 ************************************************************************/

#include"apue.h"
#include"error.h"
#include<fcntl.h>

#define RWRWRW (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)

int main(void)
{
	umask(0);
	if (creat("foo", RWRWRW) < 0)
		err_sys("creat error for foo");
	umask(S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
	if (creat ("bar", RWRWRW) < 0)
		err_sys("creat error for bar");
	exit(0);
}
