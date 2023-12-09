/*doi do F ra do C, C = 5(F-32)/9. Viet chuong trinh in ra bang chuyen doi doi voi 0<=F<=300 voi buoc nhay 20. Dung gia tri nguyen cho F và gia tri thuc cho C.*/
#include <stdio.h>
#include <conio.h>
int main()
{
int F;
float C;
for (F=0; F<=300; F+=20)
{
C=5*(F-32)/9.0;
printf("\n%-5d F <--> %.2f", F, C);
}
getch();
}

