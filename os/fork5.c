#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
int main()
{
pid_t p=fork();
if(p==0){
printf("i am a child process with id:%d",getpid());
printf("my parents id is %d",getpid());
}
else{
printf("fork fail");
exit(1);
}
}
