#include<stdio.h>
#include<pthread.h>
void* func1(void* arg)
{
pthread_t tid3;
int r;
printf("Iam the thread1 is executing\n");
}
void* func2(void* arg)
{
printf("Iam the thread2 is executing\n");
}
void* func3(void* arg)
{
printf("Iam the thread3 is executing\n");
}
int main()
{
pthread_t tid1,tid2,tid3;
int res1=pthread_create(&tid1,NULL,&func1,NULL);
int res2=pthread_create(&tid2,NULL,&func2,NULL);
int res3=pthread_create(&tid3,NULL,&func3,NULL);
if(res1==0&&res2==0&&res3==0)
printf("all the threads are created successfully\n");
else
printf("threads are not creating\n");
pthread_join(tid1,NULL);
//pthread_cancel(tid3);
pthread_join(tid2,NULL);
pthread_join(tid3,NULL);
}
