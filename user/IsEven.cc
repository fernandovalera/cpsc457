#include <stdio.h>
#include "syscalls.h"

int main() {
  bool even = isEven(3);
  printf("Even? \B", even);
  
  return 0;
}