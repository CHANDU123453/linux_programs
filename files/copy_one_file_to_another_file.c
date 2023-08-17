//write a program to copy one file of data to another file

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#define buf_size 120
int main()
{
int inputfd,outputfd,flags,n;
char buf[buf_size];
inputfd=open("copy_file.c",O_RDWR,777);
printf("fd returned by kernel is %d\n",inputfd);
if(inputfd<0)
{
printf("file is not created successfully\n");
}
flags=O_WRONLY|O_CREAT|O_TRUNC;
outputfd=open("p3.c",flags,777);
printf("fd returned by the kernel os is %d\n",outputfd);
if(outputfd<0)
{
printf("file is not opened successfully\n");
}
n=read(inputfd,buf,buf_size);//number of bytes successfully read from file
write(outputfd,buf,n);
close(inputfd);
close(outputfd);
return 0;
}



