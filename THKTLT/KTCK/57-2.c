#include <stdio.h>
#include <conio.h>
#include <math.h>
void Nhap(int a[][100], int n)
{
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
}
void Xuat(int a[][100], int n)
{   
    int i,j;
    for(i=0; i<n; i++)
    {   
        printf("\n");
        for(j=0; j<n;j++) printf("%4d",a[i][j]);
    }
}
void det(int a[][100], int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        int add=a[i][0];
        for(int j=0;j<i;j++){
            add=a[j+1][i]*a[j][0]-add*a[j+1][0];
        }
        printf("\n%d",add);
        ans+=add;
    }
    printf("\nDet cua ma tran: %ld",ans); 
}
int main()
{
    int a[100][100];
    int n,m;
    printf("Nhap n=");
    scanf("%d",&n);
    Nhap(a,n);
    Xuat(a,n);
    det(a,n);
    getch();
}