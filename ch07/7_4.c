/*************************************************************************
	> File Name: 7_4.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Thu 18 Oct 2018 10:24:57 AM CST
 ************************************************************************/

#include"apue.h"

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("argv[%d]: %s\n", i, argv[i]);
	exit(0);
}
