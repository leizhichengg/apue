/*************************************************************************
	> File Name: 4_24.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Wed 17 Oct 2018 07:57:19 PM CST
 ************************************************************************/

#include"apue.h"
#include"error.h"
#include"pathalloc.h"

int main(void)
{
	char *ptr;
	size_t size;

	if(chdir("/usr/spool/uucppublic") < 0)
		err_sys("chdir failed");

	ptr = path_alloc(&size);
	if (getcwd(ptr, size) == NULL)
		err_sys("getcwd failed");

	printf("cwd = %s\n", ptr);
	exit(0);
}
