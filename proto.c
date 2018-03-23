#include <stdio.h>
#include <stdlib.h>

int imax(int, int);

int main(void){
	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));	
	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0)); // compiler cast type to int
	return 0;
}

int imax(int n, int m){
	int max;
	if(n>m)?n:m;
	return max;
}
