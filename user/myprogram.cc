#include <stdio.h>
#include "syscalls.h"

int main() {
  int a=4;
  int b=8;
  int c=syscallSummation(a,b);
  printf("\n\nSum of %d and %d is %d\n\n", a, b, c);
  return 0;
}