#include <stdio.h>
int main(int argc, char const *argv[])
{
  int x = 15;
  while (x < 20)
  {
    x++;
    if (x % 3 != 0)
    {
      x++;
      break;
    }
  }
  printf("%d\n", x);
  return 0;
}
