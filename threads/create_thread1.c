#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
void* thread1(void* arg)
{
printf("thread1 is created successfully\n");
pthread_exit(NULL);		//used to terminate thread
}
int main()
{
pthread_t tid;
//pthread_attr_t my_attr;
int res=pthread_create(&tid,NULL,&thread1,NULL);
if(res==0)
printf("thread is created successfully\n");
else
printf("thread is not created\n");
//sleep(2);                           //sleep(2);getchar()
pthread_join(tid,NULL);
pthread_exit(NULL);
}
