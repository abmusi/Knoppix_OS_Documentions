
#include <stdio.h> 
#include <unistd.h>

int main() {
   pid_t ppid = getppid();
  printf("Parent Process ID: %d\n" , ppid);
  return 0;
}
