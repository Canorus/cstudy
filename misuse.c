#include <stdio.h>
#include <stdlib.h>

// They are merely victims of the program's failure to use function prototypes

int imax(); // no arguments declared here

int main(void){
	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3)); // First call to `printf()` omits an argument to `imax()`
	printf("The manimum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
	return 0;
}

int imax(n,m);
int n, m;
{
	int max;
	if(n>m)
		max = n;
	else
		max = m;
	return max;
}
