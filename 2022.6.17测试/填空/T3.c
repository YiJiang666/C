//输入 10 个整数 输出它们中的最大值
#include <stdio.h>
int max(int arr[], int n)
{
  int max = arr[0];
  for (int i = 1; i < n; i++) //
  {
    if (max < arr[i]) //
    {
      max = arr[i];
    }
  }
  return max; //
}
int main(int argc, char const *argv[])
{
  int arr[10];
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("max=%d", max(arr, 10)); //
  return 0;
}
