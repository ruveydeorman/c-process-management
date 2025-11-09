#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<stdlib.h>

int main(){
   int fd = open("text2.txt", O_CREAT | O_WRONLY,0644);
   if(fd==-1){
    printf("file is not open..\n");
    return 1;
   }
   char *message = "iam ruveyde orman";
   ssize_t written = write(fd,message,strlen(message));
   if(written == -1){
    perror("writeing error!..\n");
   }else{
    printf("%ld\n bytes written ",written);
   }
   close(fd);






    return 0;
}
