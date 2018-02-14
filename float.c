#include <stdio.h>
#include <stdlib.h>

int main(void){
	double d = 3.14;
	printf("%-10.10f\n", d);
	printf("%0.10f\n", d);
	printf("%1.10f\n", d);
	printf("%0.5f\n", d);
	printf("%10.10f\n", d);
	printf("%.2f\n", d);
}
