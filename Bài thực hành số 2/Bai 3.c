#include<stdio.h>
/*Note: vi la tong cua cac phan so (phep chia) nen
ket qua co the se ra so thap phan nen tong S can dung float 
(so thuc phay dong) thay vi int (so nguyen)*/
/*Cach lam giong nhu tong S=1+2+3+...+n*/
int main(){
	int a, i; //Khai bao bien (a la stn n can nhap, i la so bi chia trong 1/i, i thuoc N)
	float sum=0; //Khai bao bien sum (tong S), nho luu y o tren
	printf("Nhap N:");
	scanf("%d", &a); //Nhap n
	if(a<=0){
		printf("\nERROR\n");
		return 0;
	}
	else{
		for(i=1; i <= a; ++i){ 
			sum += (float)1/i;
		}
		printf("Ket qua la: %f", sum);
	}
}

