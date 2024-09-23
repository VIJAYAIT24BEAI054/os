#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
int main()
{
char *command="ls";
char *arg_list[]={"ls","-1",NULL};
printf("before calling excvp()\n");
int status=execvp(command,arg_list);
printf("status:%d\n",status);
}
