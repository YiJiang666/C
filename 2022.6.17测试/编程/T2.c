//输出 100 以内的素数
#include <stdbool.h>
#include <stdio.h>
bool fun(int n)
{
  for (int i = 2; i < n / 2; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}
int main(int argc, char const *argv[])
{
  for (int i = 1; i < 100; i++)
  {
    if (fun(i))
    {
      printf("%d\n", i);
    }
  }
  return 0;
}
