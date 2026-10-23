#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 2 || n > 100)
    {
        printf("Invalid size");
        return 0;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
            largest = a[i];
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] < largest)
        {
            if (!found || a[i] > second)
            {
                second = a[i];
                found = 1;
            }
        }
    }

    if (found)
        printf("Second largest = %d", second);
    else
        printf("No second-largest distinct element");

    return 0;
}