/*cac cach hoan doi hai so nhap tu ban phim*/
#include <stdio.h>
#include <conio.h>
void Swap1(int&a, int&b) // Hoan doi khong dung bien tam
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void Swap2(int &a, int &b) // Hoan doi khong dung bien tam. Dung phep XOR
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
void Swap3(int &a, int &b) // Hoan doi dung bien tam
{
    int tam;
    tam=a;
    a=b;
    b=tam;
}
void Swap4(int *a, int *b) // Hoan doi dung con tro va bien tam
{
    int tam;
    tam=*a;
    *a=*b;
    *b=tam;
}
main()
{
    int a,b;
    printf("Nhap a=");
    scanf("%d",&a);
    printf("Nhap b=");
    scanf("%d",&b);
    Swap1(a,b);
    Swap1(a,b);
    Swap2(a,b);
    Swap3(a,b);
    Swap4(&a,&b);
    printf("Gia tri a sau khi hoan doi %d\n",a);
    printf("Gia tri b sau khi hoan doi %d\n",b);
    getch();
}
