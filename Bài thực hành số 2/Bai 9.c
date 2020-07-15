#include<stdio.h>
#include<math.h>

int main(){
	int n, m=1, i=2;
	printf("Nhap n:");
	scanf("%d", &n);
	
	if(n<2)
		m = 0;
	else{
		for(; i<= (int)sqrt(n); i++)
			if(n%i == 0)
				m = 0;	
	}
	
	if(m == 1)
		printf("%d la so nguyen to", n);
	if(m == 0)
		printf("%d khong la so nguyen to", n);		
}

