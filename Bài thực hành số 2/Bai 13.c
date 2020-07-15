#include<stdio.h>

int main(){
	long n;
	printf("Nhap n:");
	scanf("%ld", &n);
	long m = n, doi = 0;
	while(m>0){
		doi = doi * 10 + m % 10;
		m /= 10;
	}
	if(doi == n){
		printf("%ld la so thuan nghich", n);
	}
	else{
		printf("%ld khong la so thuan nghich", n);
	}	
	return 0;
}

