#include<stdio.h>

int main(){
	int a, sum, i=1;
	printf("Nhap N:");
	scanf("%d", &a);
	for(; i<=a; i++){
		if(i%7 != 0){
			continue;
		}
		sum += i;		
	}
	printf("Ket qua la: %d", sum);
	return 0;
}

