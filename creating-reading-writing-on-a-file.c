#include <stdio.h>
int main(){
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
