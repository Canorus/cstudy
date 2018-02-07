#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // mac specific library
#include <time.h>
//custom defined function
int displayIntro(void){ // intro
  printf("You are in a land full of dragons. In front of you, \n");
  printf("you see two caves. In one cave, the dragon is friendly\n");
  printf("and will share his treasure with you. The other dragon\n");
  printf("is greedy and hungry, and will eat you on sight. \n\n");
  return 0;
}

int chooseCave(void){ // first action
  int cave; // make room for variable 'cave', that would be integer
  cave = 0;

  while (cave !=1 && cave != 2){ // if cave neither 1 or 2, that is, if you haven't taken any action, since it's supposed to be 0 in the first place
    printf("Which cave will you go into? (1 or 2)\n");
    scanf("%d", &cave); // get user's input, and save it to cave's pointer

  return cave;
  }
  return 0;
}

int checkCave(int chooseCave){ // second action
  int friendlyCave; // make room for friendlyCave

  printf("You approach the cave… \n");
  sleep(1); // don't know why but it counts in seconds not millisecond
  printf("It is dark and spooky..\n");
  sleep(1);
  printf("A large dragon jumps out in front of you! He opens his jaws and…\n");
  sleep(1);

  srand(time(NULL)); // shuffle
  friendlyCave=(rand()%2)+1; //1부터 2까지 사이의 정수인 난수가 반환

  if(chooseCave == friendlyCave)
    printf("Gives you his treasure!\n");
  else
    printf("Gobbles you down in one bite!\n");
  return 0;
}

int main(void){
  char str[5];
  char playAgain[5] = "yes";
  int caveNumber;

  printf("Do you want to play a game? (Yes or No) \n");
  scanf("%s",str);
  //strcmp
  if(strcmp(str, "Yes") == 0){ // && and ||
    printf("Loading.\n");
    sleep(3);
    printf("Loading..\n");
    sleep(2);
    printf("Loading...\n");
    sleep(1);
    printf("Loading Complete!\n");
    sleep(1);
    printf("Hello! Let's play the game\n");
    displayIntro(); // view intro
    while(strcmp(playAgain, "yes") == 0 || strcmp(playAgain, "y") == 0){ // is yes by default, if no proceed to else
      caveNumber = chooseCave(); // approaching cave
      checkCave(caveNumber); // input cave number
      printf("Do you want to play again? (yes or no)\n");
      scanf("%s", playAgain); // input again
    }
  }
  else if(strcmp(str, "No") == 0){
    printf("Good bye!\n");
    system("PAUSE");
    return 0;
  }
}
