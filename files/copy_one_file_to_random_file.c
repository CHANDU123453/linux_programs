//write a program to copy one file to random file

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#define buf_size 100
int main(int argc,char* argv[])
{
int inputfd,outputfd,n;
char buf[buf_size];
inputfd=open(argv[1],O_RDONLY,777);
printf("fd returned by kernel is %d\n",inputfd);
if(inputfd<0)
{
printf("file is not opened successfully\n");
}
int flags=O_WRONLY|O_CREAT|O_TRUNC;
outputfd=open(argv[2],flags,777);
printf("fd returned by kernel is %d\n",outputfd);
if(outputfd<0)
{
printf("files is not created\n");
}
n=read(inputfd,buf,buf_size);
write(outputfd,buf,n);
close(inputfd);
close(outputfd);
return 0;
}
//master1 is file1 and master2 is random file

