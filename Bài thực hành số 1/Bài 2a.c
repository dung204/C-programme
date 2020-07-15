#include<stdio.h>

int main(){
	int n;//khai bao bien nguyen
	scanf("%d", &n);//nhap so nguyen n
	if(n%2!=0){			      		              
		printf("n la so le");//neu phan du cua phep tinh n chia 2 khac 0 thi n la so le
	}
	else{
		printf("n la so chan");//neu khong phai nhu tren thi n la so chan
	}
	return 0;//ket thuc
}

