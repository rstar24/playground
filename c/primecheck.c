#include <stdio.h>
#include <stdlib.h>
// To check if the given number is prime
int main()
{
  int i, n, flag = 0;
  printf("Enter a number : ");
  scanf("%d", &n);
  if (n == 0 || n == 1)
  {
    flag == 1;
  }
  for (i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
    {
      flag = 1;
    }
  }
  if (flag == 0)
  {
    printf("It is a prime number");
  }
  else
  {
    printf("Not a prime number");
  }
  return 0;
}