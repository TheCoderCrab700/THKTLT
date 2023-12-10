/*kiem tra so n nhap vao co phai so nguyen to khong, su dung ham*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
int kt(int n)
{ int i;
if(n<2) return 0;
for(i=2;i<=(int)sqrt(n); i++)
if(n%i==0) return 0;
return 1;
}
main()
{
int n;
printf("Nhap n=") ;
scanf("%d",&n);
if(kt(n)) printf("Day la so nguyen to"); else printf("Khong phai la so nguyen to");
getch();
}

