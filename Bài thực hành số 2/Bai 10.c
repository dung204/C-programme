#include<stdio.h>

int main(){
	int n, i=2;
	printf("Nhap N:");
	scanf("%d", &n);
	while(n != 1){
		if(n % i == 0){
			printf("%5d", i);
			n/= i;
		}
		else{
			i++;
		}	
	}
	return 0;
}

