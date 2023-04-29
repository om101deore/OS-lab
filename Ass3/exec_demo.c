#include <stdio.h>
#include <unistd.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
    
    printf("From primary programm\n");
    
    char* file = (char*)"./demo";

    execv(file, NULL);

    printf("From primary programm after secondary program is executed\n");
    return 0;
}

