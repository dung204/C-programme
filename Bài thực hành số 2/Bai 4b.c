#include<stdio.h>
/*Tong so le la ket hop cua 2 bai: liet ke so le
va tinh tong S day so do*/
int main(){
	int a, i, sum=0;
	printf("Nhap N:");
	scanf("%d", &a);
	for(i=0; i<=a; i++){
		if(i%2==0){
			continue;
		}
		sum += i;
	}
	printf("Ket qua la: %d", sum);
	return 0;
}
