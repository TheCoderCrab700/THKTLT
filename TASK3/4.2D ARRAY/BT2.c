#include<conio.h>
#include<stdio.h>

void Nhap(int a[][50], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        printf("A[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
    }
}
void Xuat(int a[][50],int d,int c)
{
    int i,j;
    for(i=0;i<=d-1;i++)
    {
        for(j=0;j<=c-1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}
void Xoacot(int a[][50],int n,int &m,int c)
{
    if(c>=0 && c<m)
    {
        for(int i=0;i<n;i++)
            for(int j=c;j<m-1;j++)
                a[i][j]=a[i][j+1];
        m--;
    }
    if(c<0) printf("\n So k khong the nho hon 0");
    if(c>n) printf("\n So k khong the lon hon cap ma tran");
}
main ()
{
    int m,k,n,a[50][50];
    printf("Nhap n= ");
    scanf("%d",&n);
    m=n;
    Nhap(a,n);
    printf("\nMa tran da nhap: \n\n");
    Xuat(a,n,n);
    printf(" nhap vao so k:");
    scanf("%d",&k);
    k--;
    Xoacot(a,n,n,k);
    printf("\nMa tran sau khi xoa cot thu %d:\n",k+1);
    Xuat(a,m,n);
    getch ();
}