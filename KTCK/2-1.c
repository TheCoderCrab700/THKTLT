#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long

int hh(ll n){
    if (n<2) return 0;
    ll sum=0,i;
    for (i = 1; i <n; i++)
    {
        if(n%i==0){
            sum+=i;
            if (sum>n) return 0;
        }
    }
    if(sum==n) return 1;
    return 0;
}
void xuat(ll n){
    if(hh(n)) printf("N la so hoan hao.");
    else printf("N khong la so hoan hao");
}

int main(){
    ll n;
    printf("Nhap N:");scanf("%lld",&n);
    xuat(n);

}