#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ll long long

ll th(ll n,ll k){
    if (n==k||k==0) return 1;
    else return th(n-1,k-1)+th(n-1,k);
}
void xuat(ll n){
    ll i;
    for (i = 0; i <= n; i++)
    {
        ll j;
        //hang duoi den can le giua
        //for ( j = 0; j < 15-i; j++) printf("   ");
        for ( j = 0; j <=i;j++) printf("%6lld",th(i,j));
        printf("\n");
    }
    
}
int main(){
    ll n,k;
    printf("Nhap N:");scanf("%lld",&n);
    xuat(n);

}