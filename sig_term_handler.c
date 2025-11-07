#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>

void sig_term_handler(int sig){
    printf("SIGTERM received cleening up and exit...\n");
    exit(0);
}
int main(){
    signal(SIGTERM,&sig_term_handler);
    printf("PID:%d\n",getpid());
    int i=1;
    while(1){
        printf("iam work %d second\n",i);
        sleep(1);
        i++;
    }


    return 0;
}