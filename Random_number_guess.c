#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    printf("\n*********************************************************************\n");
    printf("\n         --------------Random Number Guessing Game----------------  \n");
    printf("\n*********************************************************************\n");
    printf("\n                    -----Press enter to continue.-----");
    getchar();

    printf("\nGuess a number between 1 and 100.\n");

    srand(time(NULL));
    int Random_Number = (rand() % 100) + 1;
    int Guessed_Number, No_of_Guesses = 0;

    do
    {
        printf("\nEnter your guess: ");
        scanf("%d", &Guessed_Number);

        if (Guessed_Number > Random_Number)
        {
            printf("Sorry! The number is smaller.\n");
        }
        else if (Guessed_Number < Random_Number)
        {
            printf("Sorry! The number is larger.\n");
        }
        No_of_Guesses++;

    } while (Guessed_Number != Random_Number);

    printf("\nCongratulations! You guessed the number in %d attempts.\n", No_of_Guesses);

    return 0;
}