//write a program to illustrate the dup2()

/*dup2() is similar to dup() but only difference is that kernal provides dupliate file descriptor of user choice
 *dup2() is also system call for generating duplicate file descriptor and  it takes 2 arguments */

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
int fd1,fd2,fd3;
char buf[]="embedded systems";
int flags=O_CREAT|O_RDWR|O_TRUNC;
fd1=open("d1.c",flags,777);
printf("fd returned by kernel is %d\n",fd1);
fd2=open("d2.c",flags,777);
printf("fd returned by kernel is %d\n",fd2);
fd3=dup2(fd1,5);
printf("fd returned by kernel is %d\n",fd3);
write(fd1,buf,20);
write(5,buf,20);
printf("%s\n",buf);
close(fd1);
close(fd2);
close(fd3);
}


