#include<stdio.h>

int main(){
	unsigned int a, b , P, S;//khai bao cac bien
	printf("Nhap vao chieu dai, chieu rong:");
	scanf("%u%u", &a, &b);//nhap do dai 2 canh cua hinh chu nhat
	P = (a+b)*2;//tinh chu vi hinh chu nhat
	printf("Chu vi cua hinh chu nhat la: %u", P);//in ket qua
	S = a*b;//tinh dien tich hinh chu nhat 
	printf("\nDien tich cua hinh chu nhat la: %u", S);//in ket qua
	return 0;//ket thuc
}

