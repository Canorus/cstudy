#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a = 1, b = 1;
	int aplus, plusb;

	aplus = a++; // aplus is incremented, a is untouched
	plusb = ++b; // b is incremented, plusb was assigned by incremented b
	printf("a    aplus    b     plusb \n");
	printf("%1d     %5d     %5d     %5d\n", a, aplus, b, plusb);

	return 0;
}
