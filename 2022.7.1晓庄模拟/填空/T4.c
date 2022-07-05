#include <stdio.h>
#define N 20
int Fmax(int s[], int n)
{
  int k, p;
  for (p = 0, k = p; p < n; p++)
  {
    if (s[p] > s[k])
    {
      k = p;
    }
  }
  return k;
}
int main(int argc, char const *argv[])
{
  int i, a[N];
  for (i = 0; i < N; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("%d", a[Fmax(a, N)]);
  return 0;
}
