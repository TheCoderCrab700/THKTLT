#include<stdio.h>
#include<math.h>
void doics(long n,long cs){
	int i=0;long long ans=0;
	while(n!=0){
		ans+=(n%cs)*pow(10,i);
		n/=cs;
		i++;
	}
	printf("%lld",ans);
}
int main() {
	long n; long cs;
	printf("Nhap n: ");scanf("%ld",&n);
	printf("Nhap co so: ");scanf("%ld",&cs);
	doics(n,cs);
	return 0;
}

