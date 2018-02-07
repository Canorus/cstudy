#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int res1;
  int res2;
  srand(time(NULL));
  res1 = rand();
  printf("%d",res1);
  srand(time(NULL));
  return 0;
}
