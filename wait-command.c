#include  <stdio.h>
#include  <string.h>
#include  <unistd.h>
#include  <sys/types.h>
int i=10;
void main()
{
    int pid=0;
    if (pid==0){
    printf("\ninitial value of i is %d", i);
    i+=10;
    printf("\nvalue of i is %d", i);
    printf("\nChild process terminated....");
    }
    else{
    wait(0);
    printf("\nvalue of i in parent process is %d", i);
    }
}
