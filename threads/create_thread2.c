#include<stdio.h>
#include<pthread.h>
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
if(res)
printf("thread is  created successfully\n");
else
printf("thread is not created\n");                
pthread_join(tid,NULL);		//used to wait for the termination of thread
printf("this line is executing after termination of thread1\n");
pthread_exit(NULL);	//terminates the parent thread
//printf("hello");
}
