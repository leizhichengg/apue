/*************************************************************************
	> File Name: 3_1.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Sat 13 Oct 2018 02:28:46 PM CST
 ************************************************************************/

#include"apue.h"

int main(void)
{
	if(lseek(STDIN_FILENO, 0, SEEK_CUR) == -1)
		printf("cannot seek\n");
	else
		printf("seek ok\n");
	exit(0);
}
