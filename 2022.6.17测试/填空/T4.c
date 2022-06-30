//求一个字符串中大写字母的个数
#include <stdio.h>
int capital(char str[])
{
  int count = 0;
  for (int i = 0; str[i]; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z') //
    {
      count++;
    }
  }
  return count; //
}
int main(int argc, char const *argv[])
{
  char str[100];
  gets(str);
  printf("CAP number is %d\n", capital(str)); //
  return 0;
}