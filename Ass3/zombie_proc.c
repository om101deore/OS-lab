#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    pid_t id;

    // create a child process for give parent process
    id = fork();
    if(id == 0){
        printf("child in process\n");
        printf("Parent pid: %d\n", getppid());
        return 0;
    }

 
    else{

        // it will stop execution of parent and child will finish its execution before parent
        sleep(10);
        printf("Parent Process\n");
        printf("Parent pid: %d\n", getpid());
    }

      return 0;
}
