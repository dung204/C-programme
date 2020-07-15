#include<stdio.h>

int main(){
	int a, fact=1, i=1, sum;
	printf("Nhap N:");
	scanf("%d", &a);
	for(; i<=a; i++){
		fact *= i;
		sum += fact;
	}
	printf("IKet qua la: %d", sum);
	return 0;
}

