///*viet chuong trinh mo phong cach goi menu. Nhap vao chu f/F thi in ra "ban chon menu File", h/H thi in ra "ban cho menu Help" */
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
char ch;
printf("Nhap vao mot ky tu: ");
scanf("%c", &ch);
switch (ch)
{
case 'F': 
case 'f': printf("Ban chon menu File"); break;
case 'H': 
case 'h': printf("Ban chon menu Help"); break;
default : printf("Ban da nhap sai ky tu yeu cau"); 
}
getch();
}

