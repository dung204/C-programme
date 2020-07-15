#include<stdio.h>
/*De tinh tong S=1+2+3+...+n, ta dat bien sum = 0, cong them i 
vao gia tri sum (khoi tao gia tri i bang 1 or 0), cong i them 1 don vi 
roi cong tiep vao sum, lam nhu the den khi i>n thi dung*/
int main(){
	int a, sum=0, i; //Khai bao bien (a la stn n can nhap; sum la tong S, khoi gan = 0; i la cac so hang trong tong S)
	printf("Nhap N:");
	scanf("%d", &a); //Nhap n
	for(i=0; i <= a; i++){ //Vi tinh tu 1 den n -> i <= n; tang i them mot don vi
		sum += i; //Cong them i vao sum
	}
	printf("\nKet qua la: %d", sum); //In ra sum
}

