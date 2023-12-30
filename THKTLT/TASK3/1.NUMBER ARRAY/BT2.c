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
void Xuat(int a[], int n)
{
    int i;
    for(i=0; i<n; i++) printf("%4d",a[i]);
}
void Dao(int a[],int n)
{   
    int i,tam;
    for (i=0; i<n/2; i++)
    {
        tam=a[i] ;
        a[i] =a[n-i-1];
        a[n-i-1]=tam;
    }
}
main()
{ 
    int a[100];
    int n;
    do {
        printf("Nhap n(n>=10):");
        scanf("%d",&n);
    }while (n<10);
    Nhap(a,n);
    printf("\nMang A truoc khi dao:\n");
    Xuat(a,n);
    Dao(a,n);
    printf("\nMang A sau khi dao\n");
    Xuat(a,n);
    getch();
}