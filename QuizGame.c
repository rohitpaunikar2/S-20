#include <stdio.h>

int main()
{
    int score = 0;
    char choose;

    for (int i = 1; i <= 5; i++)
    { // Running Loop from question 1-5

        if (i == 1)
        {

            printf("Question 1: What is 2 + 2?");
            printf("\nA. 3");
            printf("\nB. 4");
            printf("\nC. 5");
            printf("\nD. 6");

            printf("\nYour Answer = ");
            scanf(" %c", &choose); // The space in " %c" tells scanf to skip any whitespace characters
            //(spaces, tabs, newlines) sitting in the input buffer before it reads the next actual character.
            // So " %c" = "ignore any junk whitespace, then read the next meaningful character."

            if (choose == 'B')
            {
                printf("Correct Answer"); // For every Correct Answer
                score++;                  // Score will increase by 1
            }
            else
            {
                printf("Wrong Answer");
            }
        }
        else if (i == 2)
        {

            printf("\nQuestion 2: Which language is used for web page structure?");
            printf("\nA. C");
            printf("\nB. Python");
            printf("\nC. HTML");
            printf("\nD. Java");

            printf("\nYour Answer = ");
            scanf(" %c", &choose);

            if (choose == 'C')
            {
                printf("Correct Answer");
                score++;
            }
            else
            {
                printf("Wrong Answer");
            }
        }
        else if (i == 3)
        {

            printf("\nQuestion 3: What is 5 x 5?");
            printf("\nA. 10");
            printf("\nB. 20");
            printf("\nC. 25");
            printf("\nD. 30");

            printf("\nYour Answer = ");
            scanf(" %c", &choose);

            if (choose == 'C')
            {
                printf("Correct Answer");
                score++;
            }
            else
            {
                printf("Wrong Answer");
            }
        }
        else if (i == 4)
        {

            printf("\nQuestion 4: Which symbol is used for comments in C?");
            printf("\nA. //");
            printf("\nB. ##");
            printf("\nC. **");
            printf("\nD. <>");

            printf("\nYour Answer = ");
            scanf(" %c", &choose);

            if (choose == 'A')
            {
                printf("Correct Answer");
                score++;
            }
            else
            {
                printf("Wrong Answer");
            }
        }
        else if (i == 5)
        {

            printf("\nQuestion 5: Which data type is used to store a single character in C?");
            printf("\nA. int");
            printf("\nB. float");
            printf("\nC. char");
            printf("\nD. double");

            printf("\nYour Answer = ");
            scanf(" %c", &choose);

            if (choose == 'C')
            {
                printf("Correct Answer");
                score++;
            }
            else
            {
                printf("Wrong Answer");
            }
        }
        else
        {
            printf("Wrong!\n");
        }
    }

    printf("\nYour Final Score = %d/5", score); // Total Score is out of 5
}