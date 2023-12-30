#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
void check(char s[30])
{
    int l=strlen(s);
    int i;
    for(i=0;i<l/2;i++){
        if(s[i]!=s[l-i-1]) {printf("Khong doi xung");break;}
    }
    if(i==l/2) printf("Doi xung");
}
/*--------------------------------------*/
int main()
{
    char s[256],*s1;
    while(1) {
    printf("\nNhap vao xau ky tu:");
    gets(s);
    check(s);
    printf("\n Press q or Q to exit");
    if(!kbhit())
    if (toupper(getch())=='Q') break;
}
}