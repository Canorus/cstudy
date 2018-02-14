#include <stdio.h>
#include <stdlib.h>

int main(void){
	char str[100];

	printf("input your name");
	fgets(str, 100, stdin);

	printf("Nice to meet you %s\n",str);
	return 0;
}
