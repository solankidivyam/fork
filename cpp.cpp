#include <unistd.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int t = 5;
    int mainPID = getpid();
    cout << "Main process: " << mainPID << endl << endl;

    // int pid;
    int pid[10];
    sleep(t);

    // char pid[10];
    
    execl("/Users/divyamsolanki/Desktop/OS", "pstree", "-p", pid, (char*)0);

    return 0;
}