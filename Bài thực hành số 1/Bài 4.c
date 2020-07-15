#include<stdio.h>

int main(){
	int a, b;
	printf("Nhap a, b:");
	scanf("%d%d", &a, &b);
	if(a>b){
		printf("%d > %d", a, b);//xet dieu kien a>b
	}
	else if(a<b){
		printf("%d < %d", a, b);//xet dieu kien a<b
	}
	else{
		printf("%d = %d", a, b);//con lai la a=b
	}	
	return 0;
}

