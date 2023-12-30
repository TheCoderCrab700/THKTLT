#include<stdio.h>

int main() {
	int i,j,k;
	for(i=0;i<=10;i++){
		for(j=0;j<15-i;j++){
			printf("  ");
		}
		for(k=i+1;k<=2*i+1;k++){
			printf("%2d",k%10);
		}
		for(k=2*i;k>=i+1;k--){
			printf("%2d",k%10);
		}
		printf("\n");
	}
}

