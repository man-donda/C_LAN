#include <stdio.h>

int main()
{
    int a, balance, deposit, withdraw, y;
    char end;
    
    printf("Enter your balance: ");
    scanf("%d", &balance);
    do
    {
        
        printf("Enter 1 Check Balance\n");
        printf("Enter 2 Deposit Money\n");
        printf("Enter 3 Withdraw Money\n");
        printf("Enter 4 Exit\n");
        printf("Enter your Choice: ");
        scanf("%d", &a);

        switch (a)
        {
            case 1:
                printf("Current Balance: %d\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &deposit);
                balance += deposit;
                printf("Money deposited successfully.\n");
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &withdraw);

                if (withdraw <= balance)
                {
                    balance -= withdraw;
                    printf("Please collect your cash.\n");
                }
                else
                {
                    printf("Insufficient balance!\n");
                }
                break;

            case 4:
           
                printf("Thank you! Program ended.\n");
                

            default:
                printf("Invalid choice.\n");
        }

        printf("\nDo you want to run more tasks? Enter y for Yes and n for No: ");
        scanf(" %c", &end);

        if(end=='n' || end=='N')
            
            break;
        

    } while (end != 'n' || end != 'N');

    printf("Program ended by user.\n");
    return 0;
}
