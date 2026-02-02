#include <stdio.h>
#define Q 4
// Store multiple quiz questions using string arrays
// Store four options for each question
// Accept user answers (A/B/C/D)
// Calculate total score and percentage
// Display result category (Excellent / Good / Average / Fail)
// Allow user to replay the quiz

int main()
{

    char end;
    char answer;
    char question[Q][50] = {{"1. Who is main actor in movie TOXIC?"},
                            {"2. Who is Rocky Bhai?"},
                            {"3. Next upcoming movie of actor Yash."},
                            {"4. Who is Garuda in real life? "}};

    char options[Q][4][50] = {{"A. Yash", "B. Akshay Kumar", "C. Shah Rukh Khan", "D. Actor Nani"},
                              {"A. Prabhas", "B. Dalqeer Salman", "C. Yash", "D. Actor Nani"},
                              {"A. Dhurandhar 2", "B. Toxic", "C. Bahubali 3", "D. Paradise"},
                              {"A. Yash's Brother", "B. Yash's Friend", "C. Yash's Neighbour", "D. Yash's Bodygaurd"}};

    char correct[Q] = {'A', 'C', 'B', 'D'};
    do
    {
        int score = 0;

        for (int i = 0; i < Q; i++)
        {
            printf("\n%s\n", question[i]);

            for (int j = 0; j < 4; j++)
            {
                printf("%s\n", options[i][j]);
            }

            printf("Enter Answer (A/B/C/D): ");
            scanf(" %c", &answer);

            if (answer >= 'a' && answer <= 'z')
            {
                answer = answer - 32;
            }

            if (answer == correct[i])
            {
                score++;
            }
        }

        printf("Score: %d/%d\n", score, Q);

        if (score == Q)
        {
            printf("Result: Excellent \n");
        }

        else if (score == 3)
        {
            printf("Result: Good \n");
        }

        else if (score == 2)
        {
            printf("Result: Average \n");
        }

        else 
        {
            printf("Result: Fail \n");
        }

        printf("\nDo you want to play again? Enter y for Yes and n for No: \n");
        scanf(" %c", &end);

        if (end == 'n' || end == 'N')

            break;

    } while (end != 'n' || end != 'N');

    printf("Program ended by user.\n");

    return 0;
}