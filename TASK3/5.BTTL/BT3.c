#include <stdio.h>
#include <conio.h>
#include <math.h>
void Nhap(float a[], int n)
{
    int i;
    for(i=0; i<n; i++)
{
    printf("a[%d]=",i);
    scanf("%f",&a[i]);
}
}
void Xuatam(float a[], int n)
{
    int i;
    for(i=0; i<n; i++) if (a[i]<0) printf("%.6f  ",a[i]);
}
int main()
{   
    float a[100];
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    Nhap(a,n);
    printf("Cac phan tu am trong mang: ");
    Xuatam(a,n);
    getch();
}