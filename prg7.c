#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
char *command="ls";
char *arg_list[]={"ls","-l",NULL};
printf("creating another process using fork()\n");
pid_t p=fork();
int status=0;
if(p==0)
{
printf("child process\n");
status=execvp(command,arg_list);
if(status==-1)
{
printf("incorrect termination\n");
exit(1);
}
}
else
{
printf("parent process\n");
wait==NULL;
printf("now this line will be excuted\n");
}
}

