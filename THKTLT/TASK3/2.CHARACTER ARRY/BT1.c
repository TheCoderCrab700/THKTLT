#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
void tanso(char s[30])
{
    char temp[30],c[2];
    int i=0,j=0, d;
    c[1]='\0';
    temp[0]='\0';
    while(i<=strlen(s)){
        while(isspace(s[i])) i++;
        if(strchr(temp,s[i])==NULL)
        {
            c[0]=s[i];
            strcat(temp,c);
        }
        i++;
    }
    printf("\n Trong xau co cac ky tu: %s",temp);
    while(j<strlen(temp))
    {
        d=0;
        for(i=0;i<=strlen(s);i++)
        if(temp[j]==s[i]) d++;
        printf("\n Ki tu %c xuat hien %i lan",temp[j],d);
        ++j;
    }
}
/*--------------------------------------*/
main()
{
char s[256],*s1;
while(1) {
printf("\nNhap vao xau ky tu:");
fgets(s, sizeof(s)+1, stdin);
tanso(s);
printf("\n Press q or Q to exit");
if(!kbhit())
if (toupper(getch())=='Q') break;
}
}