#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//  rock, paper, scissors is a game most of us have played during
// school time. (I sometimes play it even now).
// Write a C program capable of playing this game with you.
// Your program should be able to print the result after you choose
// rock, paper or  rock, paper, scissors
int main()
{

    srand(time(0));
    int player, computer = rand() % 3;
    ;

    // 0 --> rock
    // 1 --> paper
    // 2 --> scissors

    printf("Choose 0 for Rock, 1 for Paper and 2 for Scissors\n");
    scanf("%d", &player);

    if (player == 0 && computer == 0)
    {
        printf("Its Draw!\n");
    }

    else if (player == 0 && computer == 1)
    {
        printf("You Lose\n");
    }

    else if (player == 0 && computer == 2)
    {
        printf("You Won\n");
    }

    else if (player == 1 && computer == 0)
    {
        printf("You Won\n");
    }

    else if (player == 1 && computer == 1)
    {
        printf("Its Draw!\n");
    }

    else if (player == 1 && computer == 2)
    {
        printf("You Lose\n");
    }

    else if (player == 2 && computer == 0)
    {
        printf("You Lose\n");
    }

    else if (player == 2 && computer == 1)
    {
        printf("You Won\n");
    }

    else if (player == 2 && computer == 2)
    {
        printf("Its Draw!\n");
    }

    else
    {
        printf("Something went wrong.\n");
    }

    printf("Computer chose %d\n", computer);

    return 0;
}