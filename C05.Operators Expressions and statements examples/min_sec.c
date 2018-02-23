#include <stdio.h>
#include <stdlib.h>
#define SEC_PER_MIN 60 // seconds in a minute

int main(void){
	int sec, min, left;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quit):\n");
	scanf("%d", &sec); //read number of seconds

	while(sec>0){
		min = sec / SEC_PER_MIN; //truncated number of minutes
		left = sec % SEC_PER_MIN; // number of seconds left Convert

		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
		printf("Enter next value (<=o to quit):\n");
		scanf("%d, &sec");
	}

	printf("Done!\n");

	system("pause");
	return 0;
}
