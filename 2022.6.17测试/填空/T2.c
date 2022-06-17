//输出两个正整数 输出他们的最大公约数和最小公倍数
#include <stdio.h>
int main(int argc, char const *argv[])
{
  int min, m, n, gcd, lcm;
  scanf("%d %d", &m, &n);
  min = m < n ? m : n;
  for (int i = 1; i <= min; i++)
  {
    if (m % i == 0 && n % i == 0)
    {
      lcm = i;
    }
  }
  gcd = m * n / lcm;
  printf("%d %d", lcm, gcd);
  return 0;
}
