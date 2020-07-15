#include<stdio.h>

int main(){
	int a, b, ketqua1, ketqua2, ketqua3;//khai bao cac bien
	float ketqua4;//khai bao cac bien
	printf("Nhap a, b:");
	scanf("%d%d", &a, &b);//nhap a,b
	
	ketqua1 = a+b;
	printf("\nTong hai so la: %d", ketqua1);//tong a,b
	
	ketqua2 = a-b;
	printf("\nHieu hai so la: %d", ketqua2);//hieu a,b
	
	ketqua3 = a*b;
	printf("\nTich hai so la: %d", ketqua3);//tich a,b
	
	if(b == 0){
		printf("\nVui long nhap mau != 0");//neu b = 0 thi se khong co thuong a,b
	}
	else{
		ketqua4 = (float)a/b;
		printf("\nThuong hai so la: %0.2f", ketqua4);//thuong a,b
	}	
	return 0;//ket thuc
}

