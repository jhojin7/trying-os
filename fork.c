#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int pid;
    // fork process
    pid = fork();
    if (pid<0){
        printf("error\n");
        exit(-1);
    }
    else if (pid==0){
        printf("child\n");
        exit(0);
    }
    else{
        printf("parent\n");
        exit(0);
    }
    return 0;
}
// parent
// child