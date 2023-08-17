//write a program to illustrate dup()

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
int fd1,fd2,fd3;
char buf[]="hello chandu";
fd1=open("y1.c",O_RDWR|O_CREAT,777);
printf("fd1 returned by kernel is %d\n",fd1);//3
fd2=open("y2.c",O_RDWR|O_CREAT,777);
printf("fd2 returned by kernel is %d\n",fd2);//4
fd3=dup(fd1);
printf("fd3 returned by kernel is %d\n",fd3);//some avaliable file discriptor
write(fd1,buf,20);
write(fd3,buf,30);
printf("%s\n",buf);
close(fd1);
close(fd2);
close(fd3);
}

/*
 redirecting the operator:
 (i)redirector operator(>)..../a.out>file1.c
 (ii)dup() and dup2()
 dup():is a system call for generating duplicate file descriptor
 dup(arg1) takes only one argument
 *when dup() is used kernel provides unused descriptor for the new descriptor
 */


