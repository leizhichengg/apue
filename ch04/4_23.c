/*************************************************************************
	> File Name: 4_23.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Wed 17 Oct 2018 07:51:42 PM CST
 ************************************************************************/

#include"apue.h"
#include"error.h"

int main(void)
{
	if (chdir("/tmp") < 0)
		err_sys("chdir failed");
	printf("chdir to /tmp succeeded\n");
	exit(0);
}
