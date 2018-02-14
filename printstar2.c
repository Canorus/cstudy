#include <stdio.h>
#include <stdlib.h>

int main(void){
	int N;
  scanf("%d", &N);
  if(1<=N && N<=100){
    for(int i = 1;i <= N;i++){
      char str[N];
      for(int j = 0; j < i; j++){
        str[j] = '*';
      }
      str[i] = '\0';
      //puts(str);
      printf("%*s\n",N,str);
    }
  }
}
