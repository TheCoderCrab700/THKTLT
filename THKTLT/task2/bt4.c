/*nhap vao so nguyen duong n va tinh tong: Sn = 1/1 + 1/2 + ... + 1/n*/
#include <stdio.h>
#include <conio.h>
int main()
{
int k, n;
float S=0;
printf("n= "); scanf("%d",&n);
for (k=1; k<=n; k++) S+=1.0/k;
printf("Sn = %0.2f", S);
getch();
}
