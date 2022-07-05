//删除字符串s中的空格
#include <stdio.h>
int main(int argc, char const *argv[])
{
  char s[] = "Beijing ligong daxue";
  int i, j;
  for (i = j = 0; s[i]; i++)
  {
    if (s[i] != ' ')
    {
      s[j++] = s[i]; //
    }
    else
    {
      continue; //
    }
  }
  s[j] = '\0';
  printf("%s\n", s);
  return 0;
}
