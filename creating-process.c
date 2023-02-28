#include<stdio.h>
#include <sys/types.h> 
#include <unistd.h>
int main(){

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
