#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
/*--------------------------------------*/
int number_word(char *s)
{
    int i=0, dem=0,L;
    L=strlen(s);
    while(i<L)
    {
        if(!isalpha(s[i]))
        do {i++;} while(s[i]==' ');
        else {
            dem++;
            while(s[i]!=' ') i++;
        }
    }
    return dem;
}
/*--------------------------------------*/
main()
{
char s[256],*s1;
while(1) {
printf("\nNhap vao xau ky tu: ");
fgets(s,sizeof(s)+1,stdin);
printf("Xau ky tu: %s",s);
printf("Co %d tu trong xau ky: ",number_word(s));
printf("\n Press q or Q to exit!");
if(!kbhit())
if (toupper(getch())=='Q') break;
}
}