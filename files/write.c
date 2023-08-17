#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
int main()
{
int fd;
char buf[]="Hello hyderabad";
fd=open("write_file.txt",O_WRONLY|O_CREAT,999);
printf("fd returned by kernel is %d\n",fd);
if(fd<0)
{
printf("file is not created\n");
exit(0);
}
write(fd,buf,50);
close(fd);
}


