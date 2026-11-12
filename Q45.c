#include <stdio.h>
int main()
{
    int a[10], i;
    int pos = 0, neg = 0, zero = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 0)
        {
            pos++;
        }
        if (a[i] < 0)
        {
            neg++;
        }
        if (a[i] = 0)
        {
            zero++;
        }
    }
    printf("total positive num=%d\n", pos);
    printf("total negative num=%d\n", neg);
    printf("total zero =%d\n", zero);
}