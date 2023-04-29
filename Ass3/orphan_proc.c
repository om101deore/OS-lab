#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    pid_t id;

    // create a child process for give parent process
    id = fork();
    
    if(id != 0){
        printf("Parent Process\n");
        printf("Parent pid: %d\n", getpid());
    }

    else if(id == 0){
        sleep(10);
        printf("child in process\n");
        printf("Parent pid: %d\n", getppid());
        return 0;
    }

    return 0;
}
