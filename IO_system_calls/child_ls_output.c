#include<stdio.h>
#include<unistd.h>
#include<wait.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int pid= fork();
  if(pid == 0){
    close(1);
    int fd = open("data.txt",O_RDWR | O_CREAT,0740);
    execlp("ls","ls",NULL);
    close(fd);
    }
    printf("\n");

  }
  if(pid > 0){
    int status;
    wait(&status);
    if(WIFEXITED(status)){
        printf("child has terminated with %d\n",WEXITSTATUS(status));
    }else{
        printf("child has crashed.\n");
    }


  }
    return 0;
}