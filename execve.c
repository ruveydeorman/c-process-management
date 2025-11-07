#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
 char *new_env[]={"MY_VAR=hello","OTHER_VAR=world",NULL};
 char *args[] = {"ls","-l",NULL};
 execve("/bin/ls",args,new_env);
 perror("execvpe is failer.");
 return 1;

}