/*************************************************************************
	> File Name: 1_6.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Fri 12 Oct 2018 04:14:57 PM CST
 ************************************************************************/

#include"apue.h"

int main(void)
{
	printf("hello world from process ID %ld\n", (long)getpid());
	exit(0);
}
