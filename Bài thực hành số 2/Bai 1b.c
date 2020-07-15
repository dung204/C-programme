#include<stdio.h>
/*De in ra so chan thi ta se su dung vong lap for
va lenh continue de bo qua cac so le (cac so chia khong chia het cho 2)*/
int main(){
	int a, i; //Khai bao bien (a la so tu nhien n can nhap, i la cac gia tri can in ra; bo i le lay i chan)
	printf("Nhap N:");
	scanf("%d", &a); //Nhap bien
	for(i=0; i<a; i++){ //Theo gia thiet de bai, chi lay so le/chan nho hon n (theo bien la a), tang i 1 don vi, lam lai cho den khi i=a thi dung
		if(i%2!=0){	//Dieu kien de i la so le		
			continue; //Bo qua cac gia tri thoa man dk tren
		}
		printf("\n%d", i); //In ra cac gia tri i tim dc
	}	
	return 0;
}
