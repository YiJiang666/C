#include <stdio.h>
int main(int argc, char const *argv[])
{
  char s[] = "123456789", *p, i = 0;
  p = s;
  while (*p)
  {
    if (i % 2 == 0)
    {
      *p = '*';
    }
    p++;
    i++;
  }
  printf("%s\n", s);
  return 0;
}
