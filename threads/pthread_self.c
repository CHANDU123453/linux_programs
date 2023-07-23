#include<stdio.h>
#include<pthread.h>
void* my_fun(void* arg)
{
printf("thread1 is executing\n");
}
int main()
{
int a;
pthread_t tid;
int res=pthread_create(&tid,NULL,&my_fun,NULL);
if(res==0)
{
printf("thread is created successfully\n");
}
else
printf("thread is not created\n");
a=pthread_self(); 		//returns the current thread_id
printf("current thread id is %d\n",a);
pthread_join(tid,NULL);		//wait for the termination of thread
printf("this line is executing after termination of thread\n");
}
