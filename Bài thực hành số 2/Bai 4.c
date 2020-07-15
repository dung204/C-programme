#include<stdio.h>

int main(){
	int a, i, sum;
	printf("Nhap N:");
	scanf("%d", &a);
	for(i=0; i<=a; i++){
		sum += i;
	}
	printf("Ket qua la: %d", sum);
	return 0;
}

