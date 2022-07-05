#include <stdio.h>
int main(int argc, char const *argv[])
{
  int i, j = 4;
  for (i = j; i <= 2 * j; i++)
  {
    switch (i % j)
    {
    case 0:
    case 1:
      printf("*");
      break;
    case 2:
      printf("#");
    }
  }
  return 0;
}
