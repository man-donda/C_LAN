#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_no;
    int guessed_no;
    int no_of_guesses = 0;

    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    random_no = (rand() % 100) + 1;

    do
    {
        printf("Guess the number between 1 to 100: ");
        scanf("%d", &guessed_no);

        if (guessed_no > random_no)
        {
            printf("Lower number, Please\n");
        }

        else if (guessed_no < random_no)
        {
            printf("Higher number, Please\n");
        }

        else
        {
            printf("Congrats!\n");
        }
        
        no_of_guesses++;

    } while (guessed_no != random_no);
    {
        printf("You guessed the number in %d guesses\n", no_of_guesses);
    }

    return 0;
}
