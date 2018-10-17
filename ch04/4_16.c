/*************************************************************************
	> File Name: 4_16.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Wed 17 Oct 2018 02:44:52 PM CST
 ************************************************************************/

#include"apue.h"
#include"error.h"
#include<fcntl.h>

int main(void)
{
	if (open("tempfile", O_RDWR) < 0)
		err_sys("open error");
	if (unlink("tempfile") < 0)
		err_sys("unlink error");
	printf("file unlinked\n");
	sleep(15);
	printf("done\n");
	exit(0);
}
