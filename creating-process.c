/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<stdio.h>
#include <sys/types.h> 
#include <unistd.h>
int main()
{

  int pid;
  printf("\n Enter the process id:");
  scanf("%d", pid);
  pid=fork();
  if(pid<0)
  printf("\n Error");
  else if(fork()==0)
  printf("\n executing child process");
  else
  printf("\n executing parent process");
  return 0;
}


