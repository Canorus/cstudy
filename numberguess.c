#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void){
  char name[10];
  int guessesTaken, guess, number;

  guessesTaken = 0;

  srand(time(NULL));
  number = (rand()%20)+1;

  printf("Hello! What is your name?\n");
  scanf("%s", name);

  printf("Well, %s, I am thinking of a number between 1 and 20\n",name);

  while (guessesTaken < 6 ){
    printf("Take a guess.\n");
    scanf("%d",&guess);
    guessesTaken = guessesTaken +1;

    if (guess < number)
      {printf("Higher\n");
      sleep(1);}
    else if (guess > number)
      {printf("Lower\n");
      sleep(1);}
    else if (guess == number)
      break;
  }
  if (guess == number)
    printf("Good job, %s! You guessed my number in %d guesses!", name, guessesTaken);
  else if (guess != number)
    printf("Nope. The number I was think of was %d\n", number);
}
