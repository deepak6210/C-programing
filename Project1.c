#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, n_guesses = 1 , b;
    srand(time(0));
    number = rand() % 100 + 1; // generate a random number between 1 to 100
    // printf("The number is %d", number);
    // Keep running the loop until the number is guessed
    do
    {
        printf("Guess the number between 1 and 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You Guessed it in %d attemp's\n", n_guesses);
        }

        n_guesses++;

    } while (guess != number);


    printf("Press zero to exit\n");
    scanf("%d",&b);
    if (b==0);{
     printf("Bye bye");
     }
    return 0;
}