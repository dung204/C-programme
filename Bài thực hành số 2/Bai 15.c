#include<stdio.h>

int main(){
	int n, sum;
	printf("Nhap n:");
	scanf("%d", &n);
	
	while(n){
		sum += n%10;
		n /= 10;
	}
	printf("Ket qua la: %d", sum);
	return 0;
}

