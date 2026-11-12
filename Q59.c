#include <stdio.h>
int main()
{
    int a[100], i, n, key, count = 0;
    printf("enter the no of elements: ");
    scanf("%d", &n);
    printf("enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the keyelement ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            count++;
        }
    }
    printf("occurence of %d=%d\n", key, count);
}