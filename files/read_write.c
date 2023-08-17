//current offset position

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>	//contains read and write header files
int main()
{
int fd,n;
char write_buf[50]="linux system programming";
char read_buf[50];
fd=open("kernel.c",O_RDWR|O_CREAT,777);
printf("fd returned by kernel is %d\n",fd);
if(fd<0)
{
printf("file is not created\n");
}
n=write(fd,write_buf,24);
lseek(fd,0,SEEK_SET);	//lseek is used to reposition to beginning of file
read(fd,read_buf,n);
printf("%s",read_buf);
close(fd);
}
//creat..open..write...read...close....inaccurate output
//creat..open..write...lseek...read..close...accurate output

/*
 current file  offset position:
 *each and every opened file is associated with current file offset position
 *is a non integer positive number,that measures the number of bytes from the beginning of file
 *by default current(opened file) is located at zero position

 lseek takes 3 arguments 
 lseek(int fd,offset_bytes,int whence)
 whence arguments:
 SEEK_SET
 SEEK_CUR(CURRENT)
 SEEK_END
*/
