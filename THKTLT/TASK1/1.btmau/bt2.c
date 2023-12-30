/*nhap vao gio h, phut m va giay s hien tai va so mot nguyen duong n. In ra man hinh gio, phut, giay sau n giay*/
#include <conio.h>
#include <stdio.h>
int main()
{
    int n, h, m, s;
    printf("Nhap gio: "); 
    scanf("%d", &h);
    printf("Nhap phut: ");
    scanf("%d", &m);
    printf("Nhap giay: ");
    scanf("%d", &s);
    printf("Nhap so nguyen n: ");
    scanf("%d", &n); 
    h = (h + ((n + s)/60 + m)/60)%24;
    m = (m + (n + s)/60)%60;
    s = (n+ s)%60;
    printf("Ket qua gio, phut, giay sau n giay: ");
    printf("%d : %d : %d\n", h, m, s);
    getch();
}

