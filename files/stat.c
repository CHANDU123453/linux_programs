#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>	//*buf is a stat type structure defined in sys/stat.h
int main()
{
struct stat my_struct;
stat("dup2.c",&my_struct);//stat("filename",struct stat *buf)
printf("file size:%u\n",my_struct.st_size);
printf("inode number:%u\n",my_struct.st_ino);
printf("size of blocks:%u\n",my_struct.st_blksize);
}
/* stat(filename,struct stat *buf)
 * 	.
 * 	.
 * 	.
 * 	stat() function is used to list properties of a file identified by path. It reads all file properties and dumps to buf structure. The function is defined in sys/stat.h header file.
 */	
