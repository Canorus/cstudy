#include <stdio.h>
#include <stdlib.h>

// uses C99 %z modifier -- try %u or %lu if you lack %zd

int main(void){
	int n = 0;
	size_t intsize;

	intsize = sizeof(int);
	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);
	// n = 0, n has zd bytes; all ints have zd bytes.
	// if this is the case, change %zd to %u
	system("pause");
	return 0;
}
