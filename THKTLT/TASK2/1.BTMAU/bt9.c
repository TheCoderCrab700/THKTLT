/*su dung ham, viet chuong trinh in ra cac so nguyen to nho hon hoac bang n*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int kt(int n)
{ 
    int i;
    if(n<2) return 0;
    for(i=2;i<=(int)sqrt(n); i++)
    if(n%i==0) return 0;
    return 1;
}
main()
{
    int i,n;
    printf("Nhap n=") ;
    scanf("%d",&n);
    for (i=0; i<=n; i++)
    if(kt(i)) printf("%4d",i);
    getch();
}
