#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 0)
        printf("Invalid units");
    else if (units <= 100)
    {
        bill = units * 2;
        printf("Bill = Rs. %.2f", bill);
    }
    else if (units <= 200)
    {
        bill = 100 * 2 + (units - 100) * 3;
        printf("Bill = Rs. %.2f", bill);
    }
    else
    {
        bill = 100 * 2 + 100 * 3 + (units - 200) * 5;
        printf("Bill = Rs. %.2f", bill);
    }

    return 0;
}