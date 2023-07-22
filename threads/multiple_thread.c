#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
void* fun1(void* arg)
{
int i;
for(i=1;i<=100;i++)
printf("thread1 is created\n");
pthread_exit(NULL);
}
void* fun2(void* arg)
{
int i;
for(i=1;i<50;i++)
printf("thread2 is created\n");
pthread_exit(NULL);
}
int main()
{
pthread_t tid1,tid2;
pthread_create(&tid1,NULL,fun1,NULL);
pthread_create(&tid2,NULL,fun2,NULL);
pthread_join(tid1,NULL);
pthread_join(tid2,NULL);
printf("this is executing after termination of thread1 and thread2\n"); 
pthread_exit(NULL);
}
