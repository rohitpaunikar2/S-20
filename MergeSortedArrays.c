#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n, m, i = 0, j = 0, k = 0;

    printf("Enter sizes of two arrays: ");
    scanf("%d %d", &n, &m);

    if (n < 1 || n > 100 || m < 1 || m > 100)
    {
        printf("Invalid sizes");
        return 0;
    }

    printf("Enter first sorted array: ");
    for (int x = 0; x < n; x++)
        scanf("%d", &a[x]);

    printf("Enter second sorted array: ");
    for (int x = 0; x < m; x++)
        scanf("%d", &b[x]);

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n)
        c[k++] = a[i++];

    while (j < m)
        c[k++] = b[j++];

    printf("Merged array: ");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}