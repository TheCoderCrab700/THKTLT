#include<stdio.h>
#include<conio.h>
void Nhap(int a[],int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("Nhap A[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[], int n)
{
    int i;
    printf("Mang vua nhap la:\n");
    for (i=0; i<n; i++) printf("%4d",a[i]);
}
int Ucln(int a,int b)
{
    if (a%b==0) return(b);
    if (b%a==0) return(a);
    if (a==b) return(a);
    else if (a>b) return(Ucln(a%b,b));
    else return(Ucln(a,b%a));
}
int Bcnn(int a,int b)
{
    return(a*b/Ucln(a,b));
}
int Uc(int a[], int n)
{
    if (n<1) return(a[0]);
    int i,d=Ucln(a[0],a[1]);
    for (i=2; i<n; i++) d=Ucln(d,a[i]);
    return(d);
}
int Bc(int a[], int n)
{
    if (n<1) return(a[0]);
    int i,d=Bcnn(a[0],a[1]);
    for (i=2; i<n; i++) d=Bcnn(d,a[i]);
    return(d);
}
main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    int a[100];
    Nhap(a,n);
    Xuat(a,n);
    printf("\nUCLN cua day la:%d",Uc(a,n));
    printf("\nBCNN cua day la:%d",Bc(a,n));
    getch();
}