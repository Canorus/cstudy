#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);

int main(void){
  int a = 10, b = 20;
  sum(a, b);

  system("PAUSE");
  return 0;
}

int sum(int a, int b) {
  printf("A: %d\n", a);
  printf("B: %d\n", b);
  printf("The sum of A and B: %d\n", a+b);
return 0;
}
