#include <stdio.h>
#include <stdlib.h>
#define PERIOD '.'

int main(void){
	int ch;
	int charcount = 0;
	while((ch = getchar()) != PERIOD)
	{
		if(ch != '"' &&  ch != '\'')
			charcount++;
	}

	printf("There are %d non-quote characters.\n", charcount);

	system("pause");
	return 0;
}
