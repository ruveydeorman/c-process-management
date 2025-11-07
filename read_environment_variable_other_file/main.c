#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
   char *new_env[] = {"NEW_VAR","ruveyde",NULL};
   char *args[] = {"./create_env",NULL};
   execve("./create_env",args,new_env);

    return 0;
}