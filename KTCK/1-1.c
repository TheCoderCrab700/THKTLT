#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long

int nt(ll n){
    if (n<2) return 0;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0) return 0;
    }
    
    return 1;
}
void xuat(ll n){
    if(nt(n)) printf("N la so nguyen to.");
    else printf("N khong la so nguyen to");
}

int main(){
    ll n;
    printf("Nhap N:");scanf("%lld",&n);
    xuat(n);

}