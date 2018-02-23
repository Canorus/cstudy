#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x, y, d;
	d = 0;
  scanf("%d %d", &x, &y);
	if(x<=12 && y <= 31){
		for(int m = 0; m<x;m++){
			if(m==0){
				d= d+ 0;
			}else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
				d = d + 31;
			}else if(m==2){
				d= d + 28;
			}else{
				d= d + 30;
			}
		}
		d = d + y - 1;
		d = d % 7; // 0 1 2 3 4 5 6
		char * days[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
		printf("%s",days[d]);
	}
}
