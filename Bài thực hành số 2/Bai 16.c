#include<stdio.h>
#include<math.h>

int main(){
	int m, n, i, tich;
	printf("Nhap m, n:");
	scanf("%d%d", &m, &n);
	
	if(m<n){
		for(i=ceil(sqrt(m)); i <= sqrt(n) ; i++){
			tich = i*i;
			if(m<=tich<=n){
				printf("%8d", tich);
			}
		}
	}
	
	if(m>=n){
		printf("Khong tim duoc");
	}
	
	return 0;
}

