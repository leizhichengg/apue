/*************************************************************************
	> File Name: 3_12.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Sat 13 Oct 2018 05:03:40 PM CST
 ************************************************************************/

#include"apue.h"
#include"error.h"
#include<fcntl.h>

void set_fl(int fd, int flags)
{
	int val;

	if((val = fcntl(fd, F_GETFL, 0)) < 0)
		err_sys("fcntl F_GETFL error");
	
	val |= flags;

	if(fcntl(fd, F_SETFL, val) < 0)
		err_sys("fcntl F_SETFL error");
}
