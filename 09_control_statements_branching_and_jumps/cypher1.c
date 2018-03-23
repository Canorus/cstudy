#include <stdio.h>
#include <stdlib.h>
#define SPACE ' '

int main(void){
	char ch;
	ch = getchar(); // read a character
	while(ch!='\n') // while not end of line
	{
		if(ch == SPACE) // leave the space
			putchar(ch); // character unchanged
		else
			putchar(ch+1); // change character to next one
		ch = getchar(); // get next character
	}
	putchar(ch); //print result

	system("pause");
	return 0;
}
