//输出 100 以内能被 7 整除或者个位数为 7 的整数
#include <stdio.h>
#include <stdbool.h>
bool seven(int n)
{
  if (n % 7 == 0 || n % 10 == 7) //
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main(int argc, char const *argv[])
{
  int x;
  for (x = 1; x < 100; x++)
  {
    if (seven(x))
    {
      printf("%d\n", x); //
    }
  }
  return 0;
}
