//Udemy Challenge
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a,i,guess,Number;
    printf("*****Let's Play The Guess The Number with Your Friends*****\n");

    printf("Player-1 Will be Selecting the Random Number\n");

    printf("Player-2 Should Guess The Correct Number\n");

    printf("He will be Having 5 Chance to Guess the Number\n");

    srand(time(NULL));
    Number=rand()%25;
    guess=0;
    for(i=5;i>=0;i--)
    {
        printf("Guess the Number: \n");
        scanf("%d",&guess);
        if(guess>Number)
        {
            printf("The Number you Guess is bit High \n");
            printf("You have %d chances Left \n",i);
        }
        else if(guess<Number)
        {
            printf("The Number you guess is Bit Low \n");
            printf("You have %d chances Left \n",i);
        }
        else
        {
            printf("Congratulations! You have Guessed The Number Correct \n");
        }
        if(i>5)
        {
            printf("your Chance is Over\n");
        }
    }


}
