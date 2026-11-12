
#include <stdio.h>
int main()
{
    int a[5], i, j, tamp;
    printf("enter the array elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array elements:");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j = 6 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                tamp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tamp;
            }
        }
    }
    printf("array elements after sort=%d\t", a[i]);
}