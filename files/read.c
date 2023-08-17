#include<stdio.h>
#include<fcntl.h>
int main()
{
int fd;
char buf[16];
fd=open("file5.txt",O_RDONLY|O_CREAT,999);
if(fd<0)
{
printf("file is not created\n");
}
read(fd,buf,16);
printf("%s",buf);
close(fd);
}


/*
 *read takes 3 arguments read(arg1,arg2,arg3)
 arg1=file discriptor
 arg2=empty buffer 
 arg3=no.of bytes
here data is dumped from file discriptor to empty buffer
 */
