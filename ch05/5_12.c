/*************************************************************************
	> File Name: 5_12.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Wed 17 Oct 2018 10:20:16 PM CST
 ************************************************************************/

#include"apue.h"
#include"error.h"

int main(void)
{
	char name[L_tmpnam], line[MAXLINE];
	FILE *fp;

	printf("%s\n", tmpnam(NULL));

	tmpnam(name);
	printf("%s\n", name);

	if ((fp = tmpfile()) == NULL)
		err_sys("tmpfile error");
	fputs("one line of output\n", fp);
	rewind(fp);
	if (fgets(line, sizeof(line), fp) == NULL)
		err_sys("fgets error");
	fputs(line, stdout);
	exit(0);
}
