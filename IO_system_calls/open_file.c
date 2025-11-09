#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<stdlib.h>
#include<errno.h>
  

int main(){
    int fd = open("reading_file.txt",O_RDONLY);
    if(fd == -1){
        printf("error:%s\n",strerror(errno));
        return 1;
    }else{
        printf("file openned for only reading FD: %d\n",fd);
    }
    




    return 0;

}