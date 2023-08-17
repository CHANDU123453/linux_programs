//write a program to illustrate fnctl

/*
 fcntl() :is a system call similar to dup2() 
 *It takes 3 arguments
 fcntl(fd,command,choice of user fd)
 fcntl(fd,F_DUPFD,4)
 */
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
int fd1,fd2,fd3;
fd1=open("f1.c",O_RDONLY|O_CREAT,777);
printf("fd returned by kernel is %d\n",fd1);
fd2=fcntl(fd1,F_DUPFD,4);	//similar to dup2
printf("fd2 returned by kernel is %d\n",fd2);
close(fd1);
close(fd2);
}
