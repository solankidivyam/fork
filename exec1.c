#include <unistd.h>
#include <stdio.h>
 
int main() {

  fork();
  char pid[10];
  sprintf(pid, "%d", getpid());

  execl("/Users/divyamsolanki/Desktop/OS", "ps", "-ef", pid, (char*)0);


  return 0;
}
