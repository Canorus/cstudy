#include <stdio.h>
#include <stdlib.h>
int imin(int, int);
int main(void){
		int evil1, evil2;

		printf("Enter a pair of integers (q to quit):\n");
		while(scanf("%d %d", &evil1, &evil2) == 2){
			printf("The lesser of %d and %d is %d.\n", evil2, evil2, imin(evil1, evil2));
			printf("Enter a pair of integers (q to quit):\n");
		}
		printf("Bye.\n");
		return 0;
}

// imin function can be shorten as below:
/*
   imin(int n, int m){
   return (n<m)?n:m;
   }
*/
int imin(int n, int m){
	int min;
	if (n<m)
		min = n;
	else
		min = m;
	return min;
}
/*
   The variable `min` is private to `imin()`, but the value of `min` is communicated back to the calling function with `return`.
   The effect of a statement such as the next one is to assign the value of `min` to `lesser`:

   lesser = imin(n,m);
   */
