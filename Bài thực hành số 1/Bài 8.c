#include<stdio.h>

int main(){
	float a, b, x;//Khai bao bien a, b, x (a va b la he so, x la nghiem cua pt)
	printf("Phuong trinh co dang la ax+b=0");//Intro
	
	printf("\nNhap a:");
	scanf("%f", &a);//Nhap a
	
	printf("\nNhap b:");
	scanf("%f", &b);//Nhap b
	
	
	if(a==0){  //Xet truong hop a = 0
		if(b!=0){   //Neu b khac 0
			printf("\a\nPhuong trinh vo nghiem"); //Phuong trinh vo nghiem          
		}
		else{ //Neu b = 0
			printf("\a\nPhuong trinh co vo so nghiem"); //Phuong trinh co vo so nghiem
		}
	}
	else{ //Truong hop con lai: a khac 0
		x=-b/a; //Co duoc nghiem cua phuong trinh
		printf("\a\nPhuong trinh co nghiem la:%0.2f", x); //In ra nghiem cua pt
	}			
}

