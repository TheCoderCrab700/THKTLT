#include <stdio.h>
int main ()
{
	float a,b,h,S;
	printf("Nhap vao day tren a: ");
	scanf("%f",&a);
	printf("Nhap vao day duoi b: ");
	scanf("%f",&b);
	printf("Nhap vao chieu cao h: ");
	scanf("%f",&h);
S=(a+b)*h/2;
	printf("Dien tich hinh thang la: %f\n", S);
	getch();
}
