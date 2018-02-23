#include <stdio.h>
#include <stdlib.h>

int main(void){
	int S;
	scanf("%d", &S);
	if(0<=S && S<=100){
		if(90<=S){
			printf("A");
		}else if(80<=S && S<= 89){
			printf("B");
		}else if(70<=S && S<=79){
			printf("C");
		}else if(60<=S && S<=69){
			printf("D");
		}else{
			printf("F");
		}
	}
}
