/*Viet chuong tr�nh t�nh N!!, voi N l� so tu nhi�n <=19 v� duoc nhap tu b�n ph�m.
N chan: N!!=2*4*6*�*N.
N le: N!!=1*3*5*�*N
a. D�ng for
b. D�ng while
c. D�ng do while
d. D�ng de quy*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
long gtkep(long n)
{ 
    long p=1;
    int i;
    for(i=n; i>0; i-=2) p*=i;
    return p;
}
long gtk(long n)
{
    long p=1;
    while (n>0) { p=p*n;
    n-=2;}
    return p;
} 
int giaithua(int n)
{
    if(n<2) return 1;
    return n*giaithua(n-2);
} 
long gt(long n)
{ 
    long p=1;
    do { p*=n; n-=2;}
    while (n>0);
    return p;
}
main()
{
    int n;
    printf("Nhap n=");
    scanf("%ld",&n);
    printf("Gt kep =%ld\n",gtkep(n));
    printf("Gt kep =%ld\n",gtk(n));
    printf("Gt kep =%ld\n",giaithua(n));
    printf("gt kep = %ld\n",gt(n));
    getch();
}


