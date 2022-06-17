//输出 10 个整数 输出其中最小值及其小标 输出格式:min=arr[3]=26
#include <stdio.h>
void fun(int arr[])
{
  int min = arr[0], index = 0;
  for (int i = 1; i < 10; i++)
  {
    if (min > arr[i])
    {
      min = arr[i];
      index = i;
    }
  }
  printf("min=arr[%d]=%d", index, min);
}
int main(int argc, char const *argv[])
{
  int arr[10];
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }
  fun(arr);
  return 0;
}
