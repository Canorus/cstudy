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
