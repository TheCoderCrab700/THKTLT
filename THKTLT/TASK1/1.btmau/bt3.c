/*nhap vao ban kinh R, xuat ra dien tich S va chu vi L cua hinh tron*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
float R, S, L;/*Khai bao cac bien*/
printf("Nhap ban kinh R = "); /*Thong bao nhap ban kinh r*/
scanf("%f",&R); /*Nhap ban kinh R tu ban phim*/
S = R*R*M_PI; /*M_PI la so PI*/
L = 2*M_PI*R;
printf("Dien tich hinh tron = %0.3f\n", S);
printf("Chu vi hinh tron = %0.3f\n", L);
getch();
}

