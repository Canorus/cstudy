#include <stdio.h>
#include <stdlib.h>

int main(void){
  int N;
  scanf("%d", &N);
  int a = N;
  if(1<=N && N<=100){
    for(int i = N;i>0;i--){
      char str[i];
      for(int j = 0;j<i;j++){
        str[j]='*';
      }
      str[i]='\0';
      printf("%s\n",str);
    }
  }
}
