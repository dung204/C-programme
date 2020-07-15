#include<stdio.h>

int main(){
	int a, sum;
	printf("Nhap N:");
	scanf("%d", &a);
	int i=1;
	for(; i<a; i++){
		if(i%2!=0){
			continue;
		}
		sum += i;
	}
	printf("Ket qua la: %d", sum);
	return 0;
}
