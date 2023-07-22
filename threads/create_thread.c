//write a c program to create thread

#include<stdio.h>
#include<pthread.h>
pthread_t tid;
void * thread1()
{
printf("thread1 is created\n");
}
int main()
{
int res=pthread_create(&tid,NULL,&thread1,NULL);
if(res==0)
printf("thread is  created successfully\n");
else
printf("thread is not created\n");
return 0;
}
//note cc create_thread.c -lpthread
