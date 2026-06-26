#include<stdio.h>
int main()
{
    int secret=7,guess;
    printf("Guess a number from 1 to 10:");
    do
    {
        scanf("%d",&guess);
        if(guess>secret)
        {
            printf("Too high! Try again ");
        }
        else if(guess<secret)
        {
            printf("Too low! Try again ");
        }
    } 
    while (guess!=secret);
    {
        printf("Bravo! You guessed the correct number ");
    }
    return 0;
}
    