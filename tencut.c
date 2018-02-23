#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char str[101];
  scanf("%s", str);
  int l = strlen(str);
  for(int i = 0; i<l; i++){
    printf("%c", str[i]);
    if(i!=0 && i%10==0){
      printf("\n");
    }
  }
}
