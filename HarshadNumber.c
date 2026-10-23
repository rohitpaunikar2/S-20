#include <stdio.h>

int main()
{
    int n, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Enter a positive number");
        return 0;
    }

    temp = n;

    while (temp > 0)
    {
        rem = temp % 10;
        sum += rem;
        temp = temp / 10;
    }

    if (n % sum == 0)
        printf("Harshad number");
    else
        printf("Not a Harshad number");

    return 0;
}