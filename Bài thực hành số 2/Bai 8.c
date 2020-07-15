#include<stdio.h>

int main(){
	int a, b, ucln;
	printf("Nhap hai so:");
	scanf("%d%d", &a, &b);
	go_here:
	if(a==b){
		ucln = a;
		printf("Uoc chung lon nhat cua 2 so la: %d", ucln);
	}
	if(a<b){
		b = b-a;
		goto go_here;
	}	
	if(a>b){
		a = a-b;
		goto go_here;
	}
	return 0;
}

