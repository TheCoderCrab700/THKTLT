/*So hoàn hao là so nguyên duong bang tong các uoc thuc su cua nó. Ví du: 6 = 
1+2+3. Viet chuong trình in ra tat ca các so hoàn hao nho hon 1000*/
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

