#include <stdio.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k)
{
  // Write your code here.
  int a = 0, b = 0, c = 0;
  for (int i = 1; i <= n; i++)
  {

    for (int j = i + 1; j <= n; j++)
    {

      (a < (i & j) && (i & j) < k) ? a = (i & j) : a;
      (b < (i | j) && (i | j) < k) ? b = (i | j) : b;
      (c < (i ^ j) && (i ^ j) < k) ? c = (i ^ j) : c;
    }
  }
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
}

int main()
{
  int n, k;
  scanf("%d %d", &n, &k);
  calculate_the_maximum(n, k);
  return 0;
}
