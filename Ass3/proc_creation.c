#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    pid_t id, child_id;

    printf("this is parent process id %d \n", (int)getpid());

    child_id = fork();
    /* 
    when child_id is 0 - child process is running  
    when child_id is not 0 - parent process is running  
    when child_id is -1 - fork failed
    */

    if(child_id != 0){
        printf("This is parent process pid %d \n", (int) getpid());
        printf("This is child process pid %d \n", (int) child_id);
    }
    else {
        printf("This is child process pid %d \n", (int) getpid());
        printf("This is parent process pid %d \n", (int) getppid());
    }

    return 0; 
}
