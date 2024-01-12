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
    printf("Mang vua nhap:");
    ll i;
    for(i=0; i<n; i++) printf("%8d",a[i]);
    printf("\n");
}
void XuatNt(ll a[], ll n)
{
    printf("Cac phan tu la so nguyen to trong mang:");
    ll i;
    for(i=0; i<n; i++) if(nt(a[i])) printf("%8d",a[i]);
    printf("\n");
}
int main(){
    ll a[100000],n;
    printf("Nhap N:");scanf("%lld",&n);
    Nhap(a,n);
    Xuat(a,n);
    XuatNt(a,n);
}