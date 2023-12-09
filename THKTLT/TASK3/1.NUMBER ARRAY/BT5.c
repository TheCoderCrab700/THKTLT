#include<stdio.h>
#include<conio.h>
/*----------------------------------------*/
void Nhap(int *a,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);scanf("%d",&a[i]);
    }
}
/*----------------------------------------*/
void Xuat(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%5d",a[i]);
}
/*----------------------------------------*/
void Xoaam(int *a,int *n)
{
    int i,j,L;
    i=0;
    while(i<*n)
    {
        if(a[i]<0)
        {   for(j=i;j<*n-1;j++)
            a[j]=a[j+1];
            (*n)--;

            continue;
        }
    i++;
    }
}
/*----------------------------------------*/
main()
{
    int a[50],n,i,j;
    printf("Nhap n:");scanf("%d",&n);
    Nhap(a,n);
    printf("\nDay ban dau:\n");
    Xuat(a,n);
    printf("\nDay sau khi xoa cac phan tu am:\n");
    Xoaam(a,&n);
    Xuat(a,n);
    getch();
}