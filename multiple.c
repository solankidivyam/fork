#include <unistd.h> 
#include <stdio.h> 
  
int main() 
{ 
    // Creating first child 
    int c1 = fork(); 
  
    // Creating second child. First child 
    // also executes this line and creates 
    // grandchild. 
    int c2 = fork(); 
  
    if (c1 > 0 && c2 > 0) { 
        printf("Parent\n"); 
        printf("%d %d \n", c1, c2); 
        printf("The id is %d \n\n", getpid()); 
    } 
    else if (c1 == 0 && c2 > 0) 
    { 
        printf("First child\n"); 
        printf("%d %d \n", c1, c2); 
        printf("The id is %d  \n\n", getpid()); 
    } 
    else if (c1 > 0 && c2 == 0) 
    { 
        printf("Second child\n"); 
        printf("%d %d \n", c1, c2); 
        printf("The id is %d  \n\n", getpid()); 
    } 
    else { 
        printf("Third child\n"); 
        printf("%d %d \n", c1, c2); 
        printf("The id is %d \n\n", getpid()); 
    } 
    return 0; 
} 