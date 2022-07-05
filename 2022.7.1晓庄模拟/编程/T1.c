//利用 π/2 = 2/1 * 2/3 * 4/3 * 4/5 * 6/5 * 6/7···的前100项之积。
//计算 π 的值
#include <stdio.h>
double fun(double n)
{
  double res = 1.0;
  res *= (n / (n - 1)) * (n / (n + 1));
  return res;
}
int main(int argc, char const *argv[])
{
  double res = 1.0;
  for (double i = 2.0; i <= 50.0; i += 2.0)
  {
    res *= fun(i);
  }
  printf("%lf", res * 2);
  return 0;
}