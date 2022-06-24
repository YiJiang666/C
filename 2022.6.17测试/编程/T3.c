//输入一个字符串 输出该字符中英文字母的总个数
#include <stdio.h>
#include <string.h>
int fun(char str[])
{
  int count = 0;
  for (int i = 0; str[i]; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
    {
      count++;
    }
  }
  return count;
}
int main(int argc, char const *argv[])
{
  char str[100];
  gets(str);
  printf("%d", fun(str));
  return 0;
}