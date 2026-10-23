#include <stdio.h>

int main()
{
    int pin, balance = 10000, choice = 0;
    int deposit;
    int withdraw;
    printf("Welcome User\n");
    printf("Enter Your PIN: ");
    scanf("%d", &pin);

    if (pin == 1234)
    {
        while (choice != 4)
        {
            printf("-------------MENU-------------\n");
            printf("------------------------------\n");
            printf("| 1. Check Balance           |\n");
            printf("| 2. Deposit Money           |\n");
            printf("| 3. Withdraw Money          |\n");
            printf("| 4. Exit                    |\n");
            printf("------------------------------\n");

            printf("Enter Your Choice:- ");
            scanf("%d", &choice);
            printf("You entered: %d\n", choice);

            switch (choice)
            {

            case 1:
                printf("Total Balance:- %d Rupees\n", balance);
                break;

            case 2:
                printf("Enter the Amount You want to deposit: ");
                scanf("%d", &deposit);
                balance += deposit;
                printf("Your Balance After Deposits: %d\n", balance);
                break;

            case 3:
                printf("Enter the Amount You Want to Withdraw: ");
                scanf("%d", &withdraw);
                if (withdraw <= balance)
                {
                    balance -= withdraw;
                    printf("Please Collect Your Cash\n");
                    printf("Your Balance After Withdrawl: %d\n", balance);
                }
                else
                {
                    printf("Insufficient Balance,Please Add Money\n");
                }
                break;

            case 4:
                printf("Exit");
                break;

            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
            }
        }
    }
    else
    {
        printf("Wrong PIN");
    }
    return 0;
}
