#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    /*
    0 --> Snake
    1 --> Water
    2 --> Gun
    */
    printf("Enter 0 for Snake,1 for water,2 for gun\n");
    scanf("%d", &player);
    printf("Computer choose : %d \n", computer);
    if (player == 0 && computer == 0)
    {
        printf("It is a draw! \n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You win! \n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("Computer wins! \n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("It is a draw \n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You win! \n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("Computer wins! \n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("It is a draw \n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("Computer wins! \n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You win! \n");
    }
    else
    {
        printf("Something went wrong! \n");
    }

    return 0;
}