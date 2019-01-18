#include <stdlib.h>
#include <stdio.h>

extern int process(int a, int b);

int main(int argc, char *argv[])
{
  int a = 2;
  int b = 3;

  int c = process(a, b);
  printf("process(%d, %d) -> %d\n", a, b, c);

  return 0;
}
