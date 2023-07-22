#include<stdio.h>
#include<pthread.h>
void* my_thread(void* arg)
{
printf("Thread is executing\n");
pthread_exit(NULL);	//it terminates the current thread
}
int main()
{
pthread_t tid;
int res=pthread_create(&tid,NULL,&my_thread,NULL);
if(res==0)
{
printf("thread is created successfully\n");
}
else
printf("thread is not created\n");
pthread_join(tid,NULL);	//wait for the termination of thread
printf("this line is executing after termination of thread\n");
pthread_exit(NULL);
}
