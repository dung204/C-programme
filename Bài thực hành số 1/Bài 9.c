#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c , delta, x1, x2, x; //Khai bao bien
	printf("Phuong trinh dang ax^2+bx+c=0");//Intro
	
	printf("\nNhap a:");
	scanf("%f", &a);//Nhap a
	
	printf("\nNhap b:");
	scanf("%f", &b);//Nhap b
	
	printf("\nNhap c:");
	scanf("%f", &c);//Nhap c
	
	delta = b*b-4*a*c;//Tinh delta
	
	if(delta>0){ //Trong truong hop delta > 0 thi pt co hai nghiem phan biet x1 va x2 
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("\a\nPhuong trinh co 2 nghiem phan biet la:"); //In ra nghiem
		printf("\nx1 = %0.2f", x1);
		printf("\nx2 = %0.2f", x2);
    }
    else{ 
    	if(delta==0){ //Trong truong hop delta = 0 thi phuong trinh co nghiem kep 
		x=-b/(2*a);
    		printf("\a\nPhuong trinh chi co nghiem duy nhat la:"); //Nghiem kep cua pt
    		printf("\nx = %0.2f", x); //In ra nghiem
			}
    	else{ //Con lai thi phuong trinh vo nghiem
    		printf("\a\nPhuong trinh vo nghiem"); //Ket luan vo nghiem
		}	
		
	}
}

