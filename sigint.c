#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
 #include<unistd.h>

void sig_int(int sig){
    printf("Interupted\n");
    exit(0);
}
int main(){
    signal(SIGINT,&sig_int);
    while(1){
        printf("sleeping...");
        sleep(1);
    }
    return 0;
}