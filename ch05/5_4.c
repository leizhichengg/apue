/*************************************************************************
	> File Name: 5_4.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Wed 17 Oct 2018 08:41:28 PM CST
 ************************************************************************/

#include"apue.h"
#include"error.h"

int main(void)
{
	int c;
	while ((c = getc(stdin)) != EOF)
		if (putc(c, stdout) == EOF)
			err_sys("output error");

	if (ferror(stdin))
		err_sys("input error");

	exit(0);
}
