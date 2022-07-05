#include <stdio.h>
int hcf(int m, int n)
{
  int r;
  if (m < n)
  {
    r = m;
    m = n;
    n = r;
  }
  r = m % n;
  while (r != 0)
  {
    m = n;
    n = r;
    r = m % n;
  }
  return n;
}
int main(int argc, char const *argv[])
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", hcf(a, b));
  return 0;
}
