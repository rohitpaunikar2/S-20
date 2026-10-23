#include <stdio.h>

int main()
{
    int n, result = 0, q, rem;
    printf("Enter n: ");
    scanf("%d", &n);

    q = n;

    while (q != 0)
    {
        rem = q % 10;               // To get the remainder of the number i.e. the last digit of the number
        result = result * 10 + rem; // To reverse the number, we multiply the previous result by 10 and add the remainder to it
        q = q / 10;                 // To remove the last digit from the number inputed
    }

    if (result == n)
    {
        printf("It's a Palindrome");
    }
    else
    {
        printf("It's not  a Palindrome");
    }
}