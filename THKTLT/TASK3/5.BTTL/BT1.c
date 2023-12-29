#include <stdio.h>
#include <conio.h>
#include <math.h>
void Nhap(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
{
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
}
}
void Xuatchan(int a[], int n)
{
    int i;
    for(i=0; i<n; i++) if (a[i]%2==0) printf("%4d",a[i]);
}
main()
{   
    int a[100];
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    Nhap(a,n);
    printf("Cac phan tu chan trong mang: ");
    Xuatchan(a,n);
    getch();
}