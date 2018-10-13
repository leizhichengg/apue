/*************************************************************************
	> File Name: 3_5.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Sat 13 Oct 2018 04:24:48 PM CST
 ************************************************************************/

#include"apue.h"
#include"error.h"

#define BUFFSIZE 4096

int main(void)
{
	int n;
	char buf[BUFFSIZE];

	while((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
		if(write(STDOUT_FILENO, buf, n) != n)
			err_sys("write error");

	if(n > 0)
		err_sys("read error");

	exit(0);
}
