/*So ho�n hao l� so nguy�n duong bang tong c�c uoc thuc su cua n�. V� du: 6 = 
1+2+3. Viet chuong tr�nh in ra tat ca c�c so ho�n hao nho hon 1000*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, k, S;
    for (n=1; n<1000; n++){
        S=0;
        for (k=1; k<=n/2; k++){
            if (n%k==0) S+=k;
        }
        if (S==n) printf("\n%d", n);
    }
    getch();
}

