#include <stdio.h>
#include <stdlib.h>

int main(void){
	int N, a, b;
  a = 0;
  b = 0;
  scanf("%d", &N);
  if(3<=N && N<=5000){
    for(a = N/5;a>=0;a--){
      if(N%5==0){
        printf("%d\n", a);
        break;
      }else if((N-(5*a))%3 == 0){
        printf("%d\n", a+(N-(5*a))/3);
        break;
      }
    }
    if(a==-1 && b==0){
      printf("-1\n");
    }
  }
  return 0;
}
