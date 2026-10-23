#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;
    int expected, missing;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n - 1);
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    expected = n * (n + 1) / 2;
    missing = expected - sum;

    printf("Missing number = %d", missing);

    return 0;
}