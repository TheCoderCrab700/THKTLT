/*Gia su lãi suat hang tháng là d=2%, tien vay ngân hàng là T = 1000000. Viet 
chuong trình nhap so nguyên duong n và in ra so tien phai tra sau n tháng*/
#include <stdio.h>
#include <conio.h>
int main()
{
int k, n;
float T=1000000;
printf("n= "); scanf("%d",&n);
for (k=0; k<n; k++) T*=1.02;
printf("So tien phai tra = %0.2f", T);
getch();
}

