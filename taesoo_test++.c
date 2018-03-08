#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>

void print(int a, int b){
	printf("%d %d\n", a, b);
}
void print2(int a, int b, int c, int d){
	printf("%d %d %d %d\n", a, b, c, d);
}

int main(void){
	int i, j;
	i = 0; j=0;
	printf("%d %d %d %d\n", i, i++, ++j + i++, j); // i == 0, i++ == 1, ++j + i++ == 

	i = 0; j=0;
	printf("%d %d %d %d\n", i, ++j + i++, i++, j);

	return 1;
}
