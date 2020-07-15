#include<stdio.h>

int main(){
	float r, S, P;//khai bao cac bien
	printf("Nhap vao ban kinh hinh tron:");
	scanf("%f", &r);//nhap do dai ban kinh
	P = r*2*3.14;//tinh chu vi hinh tron
	printf("Chu vi hinh tron la: %f", P);//in ket qua
	S = r*r*3.14;//tinh dien tich hinh tron
	printf("\nDien tich hinh tron la: %f", S);//in ket qua
	return 0;//ket thuc
}

