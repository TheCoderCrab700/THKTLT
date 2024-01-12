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
void Nhap(ll a[], ll n)
{
    ll i;
    for(i=0; i<n; i++)
{
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
}
}
void Xuat(ll a[], ll n)
{
    printf("Cac phan tu trong mang A:");
    ll i;
    for(i=0; i<n; i++) printf("%6d",a[i]);
    printf("\n");
}
void XoaHH(ll a[], ll n)
{
    ll i;
    for(i=0; i<n; i++) if(hh(a[i])) {
        ll k;
        for(k=i;k<n;k++) a[k]=a[k+1];
        n--;
    }
    printf("\n");
}
int main(){
    ll a[100000],n;
    printf("Nhap N:");scanf("%lld",&n);
    Nhap(a,n);
    Xuat(a,n);
    XoaHH(a,n);
    Xuat(a,n);
}