#include <stdio.h>
#include <stdlib.h>

int main(void){
	int jane, tarzan, cheetah;

	cheetah = tarzan = jane = 68;
	printf("                    cheetah    tarzan    jane\n");
	printf("First round score %4d %8d %8d\n", cheetah, tarzan, jane);

	system("pause");
	return 0;
}
