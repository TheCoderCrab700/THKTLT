/*in ra tat ca cac so nguyen to tu 2 den 1000000*/
#include <stdio.h>
#include <conio.h>
int main()
{
    long n, k, nt;
    for (n=2; n<1000000L; n++){
        nt=1; 
        for (k=2; k<n; k++)
        if (n%k==0) nt=0; 
        if (nt) printf("\n%ld", n);
    }
    getch();
}

