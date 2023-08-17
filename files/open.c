//write a c program to open a file

#include<stdio.h>
#include<fcntl.h>
int main()
{
int fd1,fd2;
fd1=open("file3.txt",O_RDONLY|O_CREAT,999);
fd2=open("file4.txt",O_WRONLY|O_CREAT,999);
printf("fd returned by kernel is %d\n",fd1);
printf("fd returned by kernel is %d\n",fd2);
}

/*
 open() takes 3 arguments i.e open(arg1,arg2,arg3)
 arg1=file name/path name
 arg2=flags
 arg3=permissions on file(optional)
flags:
O_RDONLY
O_WRONLY
O_RDWR
.......
O_CREAT    .
O_TRUNC    .
	    ........OR ing operator	
O_APPEND   .
O_NONBLOCk .
*/

