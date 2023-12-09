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
void Xuat(float a[], int n)
{
    int i;
    for(i=0; i<n; i++) printf("%6.2f",a[i]);
}
void Hoandoi( float *x, float *y)
{ 
    float tam;
    tam=*x;
    *x=*y;
    *y=tam;
}
void Sapxep( float a[], int n)
{ 
    int i,j;
    for(i=0; i<n-1; i++)
    for(j=i+1;j<n; j++ )
    if(a[i]>a[j]) Hoandoi(&a[i],&a[j]);
}
main()
{ 
    float a[100];
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    Nhap(a,n);
    printf("\nMang A truoc khi sap xep:\n");
    Xuat(a,n);
    Sapxep(a,n);
    printf("\n Mang sau khi sap xep tang dan\n");
    Xuat(a,n);
    getch();
}