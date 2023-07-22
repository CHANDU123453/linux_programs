//write a program sharing parent file by thread1 and thread2

#include<stdio.h>
#include<fcntl.h>
#include<pthread.h>
void* my_thread(void* arg);
int fd;
int main()
{
pthread_t tid1,tid2;
fd=open("/etc/passwd",O_RDONLY);
printf("fd returned by kernel is %d\n",fd);
if(fd<0)
{
printf("file is not available\n");
}
pthread_create(&tid1,NULL,my_thread,NULL);
pthread_create(&tid2,NULL,my_thread,NULL);
pthread_join(tid1,NULL);
pthread_join(tid2,NULL);
}
void* my_thread(void* arg)
{
int n;
char buf[100];
do
{
n=read(fd,buf,100);	//n is no.of successfully bytes
write(1,buf,n);
printf("\n.........................................\n");
sleep(3);
}while(n);
printf("both threads finished my work\n");
}


