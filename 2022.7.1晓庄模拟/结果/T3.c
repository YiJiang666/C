#include <stdio.h>
int main(int argc, char const *argv[])
{
  int a, b[10], c, i = 0;
  printf("输入一个整数:");
  scanf("%d", &a);
  while (a != 0)
  {
    c = a % 2;
    a = a / 2;
    b[i] = c;
    i++;
  }
  for (; i > 0; i--)
  {
    printf("%d ", b[i - 1]);
  }
  return 0;
}
