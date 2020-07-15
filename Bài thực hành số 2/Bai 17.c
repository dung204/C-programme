#include<stdio.h>

int main(){
	int a, b, ucln;
	printf("Nhap a, b");
	scanf("%d%d", &a, &b);
	
	if(a==1 || b==1){
		printf("Hai so a, b khong la hai so nguyen to cung nhau");
	}
	
	if(a!=1 && b!=1){
		go_here:
		if(a==b){
			ucln = a;
		}
		
		if(a<b){
			b -= a;
			goto go_here;
		}
		
		if(a>b){
			a -= b;
			goto go_here;
		}
		
		if(ucln==1){
			printf("Hai so a, b la hai so nguyen to cung nhau");
		}
		else{
			printf("Hai so a, b khong la hai so nguyen to cung nhau");
		}		
	}
	return 0;
}

