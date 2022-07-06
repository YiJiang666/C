//已知 int a[10]={0,10,20,30,40,50,60,70,80,90} 10个元素按升序排列 没有重复值。
//输入一个整数 n,如果没有与n相等的元素，输出-1；否则，删除与n相等的元素，输出数组元素。
//要求剩余的九个元素按升序排列。
#include <stdio.h>
#include <stdbool.h>
bool fun(int a[], int b[], int n)
{
  int flag = false, k = 0;
  for (int i = 0; i < 10; i++)
  {
    if (a[i] == n)
    {
      flag = true;
    }
    else
    {
      b[k++] = a[i];
    }
  }
  return flag;
}
int main(int argc, char const *argv[])
{
  int a[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90}, b[10], n;
  scanf("%d", &n);
  if (fun(a, b, n))
  {
    for (int i = 0; i < 9; i++)
    {
      printf("%d ", b[i]);
    }
  }
  else
  {
    printf("%d", -1);
  }
  return 0;
}