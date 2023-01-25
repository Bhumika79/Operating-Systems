/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <unistd.h>

int main()
{
    int s;
    s=fork();
    if (s<0)
    printf("\n not create");
    else if (s>0)
    printf("\n process create");
    else
    printf("\n child create");
    sleep (2);
}

