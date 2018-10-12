/*************************************************************************
	> File Name: 1_3.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Fri 12 Oct 2018 03:48:57 PM CST
 ************************************************************************/

#include"apue.h"
#include"error.h"
#include<dirent.h>

int main(int argc, char *argv[])
{
	DIR *dp;
	struct dirent *dirp;

	if(argc != 2)
		err_quit("usage: ls directory_name");
	
	if((dp = opendir(argv[1])) == NULL)
		err_sys("can't open %s", argv[1]);
	while((dirp = readdir(dp)) != NULL)
		printf("%s\n", dirp->d_name);

	closedir(dp);
	exit(0);
}
