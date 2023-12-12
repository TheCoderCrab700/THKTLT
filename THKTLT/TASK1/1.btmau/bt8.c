/*giai pt bac 2, a khac 0*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float a, b, c, delta, x1, x2;
    printf("Giai phuong trinh bac hai\n");
    printf("Nhap he so a = ");
    scanf("%f", &a);
    printf("Nhap he so b = ");
    scanf("%f", &b);
    printf("Nhap he so c = ");
    scanf("%f", &c);
    delta = b*b - 4*a*c;
    if (delta > 0) 
    {
        printf("Phuong trinh co hai nghiem phan biet\n");
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        printf("Nghiem x1 = %4.2f\n",x1);
        printf("Nghiem x2 = %4.2f\n", x2);
    }
    else 
    if (delta == 0) printf("Phuong trinh co nghiem kep la: %4.2f\n",-b/(2*a)); 
    else printf ("Phuong trinh vo nghiem.\n");
    getch();
}

