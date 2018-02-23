#include <stdio.h>
#include <stdlib.h>

int main(void){ // finds sum of first 20 integers
	int count, sum; // declaration
	count = 0; //assignments
	sum = 0;

	while(count++ < 20){
		sum = sum + count;
		printf("sum = %d\n", sum);
	}

	system("pause");
	return 0;
}
