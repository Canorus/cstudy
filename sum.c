#include <stdio.h>
#include <stdlib.h>

int main(void){
	int sum;
	char ch;
	sum = 0;
	ch = getchar();
	while(ch!='\n')
	{
		sum += ch - '0';
		ch = getchar();
	}
	printf("%d\n",sum);
	return 0;
}
