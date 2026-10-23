#include <stdio.h>

int main()
{
    int n, rem, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        rem = n % i;
        if (rem == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("The number is a perfect number");
    }
    else
    {
        printf("The number is not a Perfect number");
    }
}