#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguess=1;
    srand(time(0));
    number = rand()%100 + 1;
    //printf("The number is %d\n", number); //generate a random number between 1 and 100
    //keep runing loop until number is gussed
    do 
    {
      printf("Guess a number between 1 and 100\n");
      scanf("%d",&guess);
      if(guess>number)
      {
        printf("Lower number please!\n");
      }
      else if(guess<number)
      {
        printf("Higher number please!\n");
      }
      else
      {
        printf("You guessed it in %d attempts!\n",nguess);
      }
      nguess++;
    }while(guess!=number);
    return 0;
}