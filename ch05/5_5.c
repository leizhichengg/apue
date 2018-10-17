/*************************************************************************
	> File Name: 5_5.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Wed 17 Oct 2018 08:43:53 PM CST
 ************************************************************************/

#include"apue.h"
#include"error.h"

int main(void)
{
	char buf[MAXLINE];

	while (fgets(buf, MAXLINE, stdin) != NULL)
		if (fputs(buf, stdout) == EOF)
			err_sys("output error");

	if (ferror(stdin))
		err_sys("input error");
	exit(0);
}
