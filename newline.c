/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int n = 1;
	char str[101];
	while(n<101){
		gets(str);
		int l = strlen(str);
		if(strcmp(str,"")==0 || str[0] == ' ' || str[l-1] == ' '){
			break;
		}else{
			printf("%s",str);
			++n;
		}
	}
}
*/
#include <stdio.h>
#include <string.h>
int main(void) {
      int index = 0;
      char input[101];
      while (gets(input)) {
            if (input[0] == '\0' || input[0] == ' ' || input[strlen(input) - 1] == ' ' ) {
                  break;
            }
            puts(input);
      }
      return 0;
}
