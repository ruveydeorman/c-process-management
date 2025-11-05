#include<stdlib.h>
#include<stdio.h>
int main(){
    char *user = getenv("USER");
    if(user != NULL){
        printf("user name is %s\n",user);
    }else{
        printf("use doesn't find\n");
    }
   
    return 0;
}