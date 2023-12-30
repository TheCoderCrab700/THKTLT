/*in ra tat ca cac so hoan hao nho hon n co su dung ham*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int Hoanhao(int n)
{
    int i,sum;
    sum=0;
    for(i=1;i<=n/2;i++)
    if(n%i==0) sum+=i;
    if(sum==n) return 1 ; 
    else return 0;
}
main()
{
    int n,i;
    printf("nhap so n =");scanf("%d",&n);
    for(i=1;i<=n;i++)
    if (Hoanhao(i)==1) printf("%10d",i);
    getch();
}

