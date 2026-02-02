#include <stdio.h>

int main()
{
    int choice, a, b, c;
    char end;

    do
    {

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);
    
        printf("Press 1 for + \n");
        printf("Press 2 for - \n");
        printf("Press 3 for * \n");
        printf("Press 4 for / \n");
        printf("Press 5 for Exit \n");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("The sum is %d\n", a + b);
            break;

        case 2:
            printf("the difference is %d\n", a - b);

        case 3:
            printf("the multiplication is %d\n", a * b);

        case 4:
            printf("the division is %d\n", a / b);

        case 5:
            end = 1;
            printf("Exiting the program\n");

        default:
            printf("Please, enter valid choice!\n");
        }

        printf("\nDo you want to run other tasks? Enter y for Yes and n for No: ");
        scanf(" %c", &end);
        if(end=='n')
        break;
    
    
    }
    while (end != 'n' || end != 'N');
        printf("Program ended");

    // if (choice >= 1 && choice <= 4)
    // {
    //     printf("Enter a: ");
    //     scanf("%d", &a);

    //     printf("Enter b: ");
    //     scanf("%d", &b);

    //     if (choice == 1)
    //     {
    //         c = a + b;
    //         printf("The sum of given number is %d", c);
    //     }

    //     else if (choice == 2)
    //     {
    //         c = a - b;
    //         printf("The difference between given numbers is %d", c);
    //     }

    //     else if (choice == 3)
    //     {
    //         c = a * b;
    //         printf("The multiplication between given numbers is %d", c);
    //     }

    //     else
    //     {
    //         c = a / b;
    //         printf("The division between given numbers is %d", c);
    //     }
    // }

    // else
    //     printf("Please, enter valid choice!");

    return 0;
}