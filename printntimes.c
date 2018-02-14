#include <stdio.h>
#include <stdlib.h>

int main(void){
	int N;
  scanf("%d", &N);
  int a = N;
  for(int i = 1; i <= N; i++){
    printf("%d\n", a);
    a--;
  }
}
