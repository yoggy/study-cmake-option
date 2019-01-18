#include <stdlib.h>
#include <stdio.h>

int process(int a, int b)
{
  printf("call method: %s:%d:process(%d, %d)\n", __FILE__, __LINE__, a, b);
  return a + b;
}
