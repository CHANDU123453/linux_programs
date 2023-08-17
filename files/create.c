//write a program to create a file

#include<stdio.h>
int main()
{
int fd1,fd2;
fd1=creat("file1.txt",999);
fd2=creat("file2.txt",999);
printf("fd returned by the kernel for file1.txt is %d\n",fd1);//3
printf("fd returned by the kernel for file1.txt is %d\n",fd2);//4
close(fd1);
close(fd2);
}

/*creat() takes 2 areguments

if file creates successfully it returns 3

if file not created successfully it returns -1
*/
