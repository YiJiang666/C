//输入正整数n 计算并输出1 + 1/2 + 1/3 + 1/4 ··· 1/n 输出结果保留 4 位小数
#include <stdio.h>
double fun(int n)
{
  double res = 0.0;
  for (float i = 1; i <= n; i++)
  {
    res += 1 / i;
  }
  return res;
}
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  printf("%.4lf", fun(n));
  return 0;
}
