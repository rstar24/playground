#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size ; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int j = 0; j < size ; j++)
    {
        sum = sum + a[j];
    }
    printf("%d", sum);

    return 0;
}