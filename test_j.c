#include <stdio.h>
#include <stdlib.h>

typedef struct class {
    int num;
    char str;
} Class;

void sum(int a, int b, Class * calcul_result_class);

int main(void){
  int a = 10, b = 20;
  Class result;
  sum(a, b, &result);
  system("PAUSE");
  return 0;
}

void sum(int a, int b, Class * calcul_result_class) {
  printf("A: %d\n", a);
  printf("B: %d\n", b);
  printf("The sum of A and B: %d\n", a+b);
  calcul_result_class->num = a + b;
  calcul_result_class->str = 'e';
  //return a + b;
}
