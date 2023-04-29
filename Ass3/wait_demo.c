#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){

     pid_t id;

    id = fork();

    // id = 0 means child process being executed
    if (id == 0) {
        printf("child process\n");
    }

    // id != 0 means parent process being executed
    else {
        printf("parent process before wait call\n");

        // waits till execution of child process
        wait(NULL);
        printf("parent process after wait call\n");
    }

    printf("Exit\n");

    

}
