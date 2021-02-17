#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    //Here is the fork process 
    fork();

    //PID is a unique number called process ID that identifies that process to the system

    //In addition to a unique process ID, each process is assigned a parent process ID (PPID) that tells which process started it. 
    //The PPID is the PID of the process’s parent.
    printf("Hello this is fork function ! \n PID : %d \n PPID : %d \n", getpid(), getppid());



    return 0;
}