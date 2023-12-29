#include <conio.h>
#include <stdio.h>
#include <ctype.h> 

void Nhap(int a[][50], int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
}
void Xuat(int a[][50],int m,int n)
{
    int i,j;
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}
void nhanmt(int a[][50],int b[][50],int c[][50],int ma,int na,int mb,int nb)
{
    for(int i=0;i<ma;i++)
    {
        for(int j=0;j<nb;j++)
        {
            int tmp=0;
            for (int k = 0; k <na ; k++) tmp+=a[i][k]*b[k][j];    
            c[i][j]=tmp;
        }
    }
}

main ()
{
    int ma,na,mb,nb,a[50][50],b[50][50],c[50][50];

    while (true)
    {
        //Nhap MT A
        printf("Ma tran A:\n");printf("Nhap m: ");
        scanf("%d",&ma);
        printf("Nhap n: ");scanf("%d",&na);
        Nhap(a,ma,na);
        printf("\nMa tran A: \n\n");
        Xuat(a,ma,na);
        //Nhap MT B
        printf("Ma tran B:\n");printf("Nhap m: ");
        scanf("%d",&mb);
        printf("Nhap n: ");scanf("%d",&nb);
        Nhap(b,mb,nb);
        printf("\nMa tran B: \n\n");
        Xuat(b,mb,nb);
        // KT chieu va nhan ma tran
        if(na==mb){
            nhanmt(a,b,c,ma,na,mb,nb);
            printf("A nhan B la ma tran C:\n");
            Xuat(c,ma,nb);
        }
        else printf("So hang MT A # So cot MT B");
        //Phim thoat
        printf("\n Press q or Q to exit");
        if(!kbhit())
        if (toupper(getch())=='Q') break;
    }

}