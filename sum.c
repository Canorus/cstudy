#include <stdio.h>
#include <stdlib.h>

int main(void){
	int N, sum;
	scanf("%d", &N);
	char num[N+1];
	scanf("%s", num);
	if(1<=N && N<=100){
		for(int i = 0; i < N; i++){
			int j = num[i]-'0'; // type casting char to int?
			sum = sum + j;
		}
		printf("%d", sum);
	}
}
