#include<stdio.h>

int main(){
	int a, b, c, d, max;//khai bao cac bien nguyen
	printf("Nhap a, b, c, d:");
	scanf("%d%d%d%d", &a, &b, &c, &d);//nhap 4 so nguyen	

	/* Neu so nao lon hon tat ca cac so con lai thi lay so
	do lam max, con 4 so bang nhau thi khong co max */
	
	if(a == b && b == c && c ==d)
		printf("Khong co gia tri lon nhat");
	else{	
		max = a;
		if(max<b)
			max = b;
		if(max<c)
			max = c;
		if(max<d)
			max = d;
		printf("Gia tri lon nhat la: %d", max);		
	}
	return 0;//ket thuc
}		
	

