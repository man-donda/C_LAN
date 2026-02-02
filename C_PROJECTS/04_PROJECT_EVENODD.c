#include <stdio.h>

int main()
{
    // Check even or odd
    // Check prime or not
    // Find factorial
    // Reverse the number

    int a, choice, i = 1, prime, product, n, rev, yes, no;
    char end;

     do
    {

    printf("Enter number: ");
    scanf("%d", &a);

   

        printf("Enter 1 for check number is even or odd.\n");
        printf("Enter 2 for check number is prime or not.\n");
        printf("Enter 3 for find the factorial of given number.\n");
        printf("Enter 4 for reverse the given number.\n");
        printf("Enter 5 for Exit.\n");

        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            if (a % 2 == 0)
            {
                printf("%d is even\n", a);
            }

            else
            {
                printf("%d is odd\n", a);
            }
            break;

        case 2:
            if (a <= 1)
            {
                printf("Number is not a prime number\n");
            }

            else
            {
                int prime = 1;
                for (i = 2; i <= a; i++)
                {
                    if (a % i == 0)
                    {
                        prime = 0;
                        break;
                    }
                }
                if (prime)
                    printf("Number is prime\n");

                else
                {
                    printf("Number is not a prime number\n");
                }
            }
            break;

        case 3:
            product = 1;
            for (i = 1; i <= a; i++)
            {
                product *= i;
            }
            printf("The Factorial of the given number is %d\n", product);
            break;

        case 4:
            n = a;
            rev = 0;
            while (n != 0)
            {
                rev = rev * 10 + n % 10;
                n = n / 10;
            }
            printf("The Reverse Number of the given number is %d\n", rev);
            break;

        case 5:

            printf("You are exiting.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }

       

        printf("\nDo you want to run more program? Enter y for Yes and n for No: ");
        scanf(" %c", &end);

        if(end=='n')
            
            break;
        

    } while (end != 'n' || end != 'N');

    printf("Program ended by user.\n");
    return 0;
}
