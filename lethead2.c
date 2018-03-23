#include <stdio.h>
#include <stdlib.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACe "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void){
	int space;

	show_n_char('*', WIDTH); /* using constants as arguments */
	putchar('\n');
	show_n_char(SPACE, 12); /* using constants as arguments */
	printf("%s\n", NAME);
	spaces = (WIDTH = strlen(ADDRESS)) / 2 ;
	show_n_char(SPACE, spaces); /* use a variable as argument */
	printf("%s\n", ADDRESS);
	show_n_char(SPACE, (WIDTH - strlen(PLACE)/2));
	printf("%s\n", PLACE);
	show_n_char('*', WIDTH);
	putchar(\\n');

	return 0;

}
