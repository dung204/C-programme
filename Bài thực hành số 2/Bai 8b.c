#include<stdio.h>

int main(){
	int a, b, bcnn, ucln, i=1;
	printf("Nhap hai so:");
	scanf("%d%d", &a, &b);
	int x=a, y=b;
	go_here:
		
	if(a == b){
		ucln=a;
	}
	
	if(a<b){
		b -= a;
		goto go_here;
	}
	
	if(a>b){
		a -= b;
		goto go_here;
	}
	
	bcnn=x*y/ucln;
	printf("Boi chung nho nhat cua 2 so la: %d", bcnn);
}

