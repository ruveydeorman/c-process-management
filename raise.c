#include<signal.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void handler(int sig){
    printf("signai is catched %d\n",sig);
    exit(0);
}
int main(){
    signal(SIGINT,handler);
    printf("i am send signal for me.. \n");
    raise(SIGINT);
    printf("it is not working..\n");
    return 0;
}