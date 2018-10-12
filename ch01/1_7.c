/*************************************************************************
	> File Name: 1_7.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Fri 12 Oct 2018 04:17:29 PM CST
 ************************************************************************/

#include"apue.h"
#include"error.h"
#include<sys/wait.h>

int main(void)
{
	char buf[MAXLINE];
	pid_t pid;
	int status;

	printf("%% ");
	while(fgets(buf, MAXLINE, stdin) != NULL)
	{
		if(buf[strlen(buf) - 1] == '\n')
			buf[strlen(buf) - 1] = 0;
		if((pid = fork()) < 0)
		{
			err_sys("fork error");
		}
		else if(pid == 0)
		{
			execlp(buf, buf, (char *)0);
			err_ret("couldn't execute: %s", buf);
			exit(127);
		}

		if((pid = waitpid(pid, &status, 0)) < 0)
			err_sys("waitpid error");
		printf("%% ");
	}
	exit(0);
}

