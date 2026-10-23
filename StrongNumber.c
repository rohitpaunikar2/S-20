#include <stdio.h>

int main()
{
    int n, fact = 1, result = 0, rem;

    printf("Enter the Number: ");
    scanf("%d", &n);

    int q = n;

    while (q != 0)
    {
        rem = q % 10;
        for (int i = 0; i <= rem; i++)
        {
            fact *= i;
        }
        result += fact;
        fact = 1;
        q /= 10;
    }
    if (result == n)
    {
        printf("%d is not a Strong Number", n);
    }
    else
    {
        printf("%d is a Strong Number", n);
    }
    return 0;
}