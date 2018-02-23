#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(void){
	int count = MAX + 1; // count is 101
	while(--count > 0){ // --count is 100
		printf("%d bottles of spring water on the wall, %d bottles of spring water!\n", count, count);
		printf("Take one down and pass it around, \n");
		printf("%d bottles of spring water!\n\n", count -1 ); // --?

	}
	system("pause");
	return 0;
}
