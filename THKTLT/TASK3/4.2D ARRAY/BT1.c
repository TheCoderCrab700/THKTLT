#include <stdio.h>
#include <conio.h>
#include <math.h>
void Nhap(int a[][100], int n, int m)
{
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
}
void Xuat(int a[][100], int n, int m)
{   
    int i,j;
    for(i=0; i<n; i++)
    {   
        printf("\n");
        for(j=0; j<m;j++) printf("%4d",a[i][j]);
    }
}
main()
{
    int a[100][100];
    int n,m;
    printf("Nhap n=");
    scanf("%d",&n);
    printf("Nhap m=");
    scanf("%d",&m);
    Nhap(a,n,m);
    Xuat(a,n,m);
    getch();
}