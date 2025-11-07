#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
  if(setenv("NEW_VAR","rüveyde",1)==0){
     if(getenv("NEW_VAR") != NULL){
          printf("NEW VARIABLE : %s\n",getenv("NEW_VAR"));
     }else{
        printf("environemnt variable not found.");
     }
   }else{
     perror("setenv failed.");
   }
    return 0;
}
