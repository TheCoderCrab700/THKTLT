#include<stdio.h>
#include<conio.h>
#include<math.h>
#define ll long long 
int main()
{
	ll a,b,c=0; int cs[50];
	printf("Nhap a="); scanf("%lld",&a);
	printf("Nhap b="); scanf("%lld",&b);
	int i=1;
	ll tmp=b;
	c=a*b;
	while (tmp>0)
	{	
		cs[i]=(tmp)%10;
		tmp/=pow(10,i);
		i++;
	}
	printf("%30lld\n",a);
	printf("          x\n");
	printf("%30lld\n",b);
	printf("          --------------------\n");
	for(int j=1;j<i;j++){
		for (int k = 0; k <= 10-j; k++) printf(" ");	
		printf("%20lld",a*cs[j]);
		printf("\n");
	}
	printf("          --------------------\n");
	printf("%30lld",c);
	getch();
}