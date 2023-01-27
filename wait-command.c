/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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

