//输出水仙花数
#include <stdbool.h>
#include <stdio.h>
bool fun(int n)
{
  int i = n / 100, j = n / 10 % 10, z = n % 10;
  if (i * i * i + j * j * j + z * z * z == n)
  {
    return true;
  }
  return false;
}
int main(int argc, char const *argv[])
{
  for (int i = 100; i < 1000; i++)
  {
    if (fun(i))
    {
      printf("%d\n", i);
    }
  }
  return 0;
}
