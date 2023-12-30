#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
float ketqua, tu, mau;
    float x;
    printf("Nhap x: ");
    scanf("%f",&x);
    tu = pow(x, 3) + log(fabs(x - 3) + 2) / log(5);
    mau = pow(atan(x - 5), 2) + 1;
    ketqua = tu/mau;
    printf("Gia tri cua bieu thuc = %.2f", ketqua);
    getch();
    return 0;
}

