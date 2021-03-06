//计算s = 1 - 1/2! + 1/3! - 1/4! + ··· +1/n! 直到最后一项小于10^(-6)
#include <stdio.h>
double fun(int n)
{
  int res = 1;
  for (int i = 1; i <= n; i++)
  {
    res *= i;
  }
  return 1.0 / res;
}
int main()
{
  int i = 2, flag = -1;
  double s = 1;
  while (fun(i) >= 10e-7)
  {
    s += flag * fun(i);
    flag *= -1;
    i++;
  }
  s += flag * fun(i);
  printf("%d\t%.10lf\t%.10lf\n", i, fun(i), s);
  return 0;
}