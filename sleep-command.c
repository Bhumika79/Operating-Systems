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
