#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
pid_t p=fork();
if(p==0)
{
printf("child process");
}
else
{
printf("parent process");
wait(NULL);
printf("child has terminatd");
}
printf("BYE");
}
