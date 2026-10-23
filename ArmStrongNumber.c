#include <stdio.h>

int main()
{
    int count = 0, result = 0, cnt, rem, mul = 1, number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int q = number;

    while (q != 0)
    {
        q = q / 10;
        count++;
    }

    cnt = count; // To stop the counting of digits in the number
    q = number; // Assuming 'number' is the variable holding the original input number
    while (q != 0)
    {
        rem = q % 10;
        while (cnt != 0)
        {
            mul *= rem;
            cnt--;
        }
        result += mul;
        cnt = count;
        q = q / 10;
        mul = 1;
    }
    if (result == number)
    {
        printf("%d is an Armstrong Number", number);
    }
    else
    {
        printf("%d is not an Armstrong Number", number);
    }
    return 0;
}