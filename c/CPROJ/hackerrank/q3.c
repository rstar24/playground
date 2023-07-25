#include <stdio.h>
#include <stdlib.h>

int minimum(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{

    int n;
    scanf("%d", &n);

    int len = (2 * n) - 1;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            int min_val = minimum(minimum(i, j), minimum(len - i - 1, len - j - 1));
            printf("%d ", (n - min_val));
        }
        printf("\n");
    }
    return 0;
}