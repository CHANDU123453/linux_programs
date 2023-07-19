//atexit:after termination of main program and functions are executed which is in reverse order
 
#include<stdio.h>
void func1(void)
{
printf("this is function1\n");
}
void func2(void)
{
printf("tis is function2\n");
}
int main()
{
printf("welcome to hyderabd\n");
atexit(func1);//executed after termination of main program
atexit(func2);//executed after termination of main program 
printf("this is main program\n");
}



