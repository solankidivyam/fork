#include <stdio.h>
#include <unistd.h>
int main()
{
execl("/bin/pstree", "pstree", NULL);
printf("There is some error\n"); 
return 0;
}
