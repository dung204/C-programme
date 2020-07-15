#include<stdio.h>

int main(){
	int n, i=1;
	int ketqua;
	printf("Nhap n:");
	scanf("%d", &n);
	
	if(n== 0){
		ketqua = 1;
		printf("Ket qua la: %d", ketqua);
	}
	
	if(n>0){
		for(; i<=n; i++){
			ketqua *= i;
		}
		printf("Ket qua la: %d", ketqua);
	}
	return 0;
}

