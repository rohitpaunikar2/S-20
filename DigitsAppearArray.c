#include <stdio.h>

int main()
{
    int n, rem;

    printf("Enter a Number: ");
    scanf("%d", &n);

    int seen[10] = {0};

    while (n > 0)
    {
        rem = n % 10;
        if (seen[rem] == 1)
            break;
        seen[rem] = 1;
        n = n / 10;
    }
    if(n > 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}