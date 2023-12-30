/*Gia su l�i suat hang th�ng l� d=2%, tien vay ng�n h�ng l� T = 1000000. Viet 
chuong tr�nh nhap so nguy�n duong n v� in ra so tien phai tra sau n th�ng*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int k, n;
    float T=1000000;
    printf("n= "); scanf("%d",&n);
    for (k=0; k<n; k++) T*=1.02;
        printf("So tien phai tra = %0.2f", T);
    getch();
}

