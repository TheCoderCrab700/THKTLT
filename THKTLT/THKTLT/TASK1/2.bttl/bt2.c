#include <stdio.h>
int main ()
{
	float L, W, D, C;
	printf("Nhap vao chieu dai L: ");
	scanf("%f",&L);
	printf("Nhap vao chieu rong W: ");
	scanf("%f",&W);
	D=L*W;
	C=(L+W)*2;
	printf("Dien tich HCN la: %f\n", D);
	printf("Chu vi HCN la: %f\n",C);
}    
