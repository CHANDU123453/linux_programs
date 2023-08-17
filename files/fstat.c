//write a program to display all information of file(inode information)

/*commands used to display inode information
 * ls -ln
 * ls -i
 * ls -l
 * system calls:
 * stat
 * fstat
 * */

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
int main()
{
int fd;
struct stat my_struct;
fd=open("dup2.c",O_RDONLY,777);
fstat(fd,&my_struct);
printf("file size:%d\n",my_struct.st_size);
printf("inode number:%d\n",my_struct.st_ino);
printf("block size:%d\n",my_struct.st_blksize);
printf("user id:%d\n",my_struct.st_uid);
printf("group id:%d\n",my_struct.st_gid);
close(fd);
}
/*inode information:
 * idone contains all the information about file like,
 * name of file
 * inode number
 * group id
 * user id
 * block size
 * permissions
*/
