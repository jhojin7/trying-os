#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
    int pid = fork();
    if (pid<0){
        printf("error\n");
        exit(-1);
    }
    else if (pid==0){
        // executes ls command
        execl("/bin/ls","/home",NULL);
        exit(0);
    }
    else {
        int wait_pid = wait(NULL); //after termination 
        printf("process terminated\n");
        exit(0);
    }
// a.out  exec.bin  exec.c  fork.c
// process terminated
}
