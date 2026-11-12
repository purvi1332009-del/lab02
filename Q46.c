//find max and secondmax in array
#include <stdio.h>
int main()
{

    int a[10], n, i, max, smax;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    smax = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            smax = max;
            max = a[i];
        }
        else if (a[i] > smax && a[i] < max)
        {
            smax = a[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Second maximum = %d\n", smax);

    return 0;
}
