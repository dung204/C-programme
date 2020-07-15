#include<stdio.h>

int main(){
	int a, i, dem=0;
	printf("Nhap N:");
	scanf("%d", &a);
	for(i=1; i<=a; ++i){
		if(a%i == 0){
			printf("%d, ", i);
			dem++;
		}		
	}
	printf("\nSo %d co %d uoc so", a, dem);
}

