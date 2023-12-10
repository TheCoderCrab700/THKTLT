#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
float x, y, tuso, mauso, f;
printf("Nhap x = ");
scanf("%f", &x);
printf("Nhap y = ");
scanf("%f", &y);
if ((x + y) > 0)
{ 
mauso = atan(x-y) + M_PI/4;
if(mauso == 0) printf("Loi mau so bang 0!\n");
else 
{ 
tuso = pow(x*x + y*y, 1.0/3) - log(x+y)/log(5);
f = tuso / mauso;
printf("Gia tri cua ham=%4.2f", f);
}
}
else 
printf("Loi mien xac dinh cua ham logarit!\n"); 
getch();
}

