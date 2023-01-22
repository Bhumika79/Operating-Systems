/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    FILE *fp;
    fp  = fopen ("data.txt", "w");
    int i;
    FILE * fptr;
    char fn[50];
    char str[] = "Guru99 Rocks\n";
    fptr = fopen("data.txt", "w"); // "w" defines "writing mode"
    for (i = 0; str[i] != '\n'; i++)
    {
        /* write to file using fputc() function */
        fputc(str[i], fptr);
        
    }
        fclose(fptr);
        return 0;
    }