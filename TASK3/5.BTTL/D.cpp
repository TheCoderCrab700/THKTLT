#include<stdio.h>
#include<stdlib.h>
#define ll long long 
void Xuat(ll a[], ll n){
    ll i;
    for(i=0; i<n; i++) printf("%4d",a[i]);
}
void Swap(ll *a,ll *b){
ll tmp =*a;
*a=*b;
*b=tmp;
}
void QuickSort(ll a[], ll left, ll right){
 ll i = left, j = right;
 ll pivot = a[(left + right) / 2]; // Lay pivot là phan tu giua
 do
 {
 // Tìm vi trí i, j can hoán vi
 while (a[i] < pivot && i < right) i++;
 while (a[j] > pivot && j > left) j--;
 if (i <= j)
 {
 Swap(&a[i], &a[j]);
 i++; j--;
 }
 } while (i <= j);
 
// Khi dó pivot se chot vi trí trong mang
 // Ta can goi ham de quy den 2 mang con bên trái pivot và bên phai pivot
 if (left < j) QuickSort(a, left, j);
 if (i < right) QuickSort(a, i, right);
}
ll lowerbound(ll A[],ll target, ll n){
	ll lo = 0, hi = n+1;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (A[mid] <= target && A[mid+1]>target)
            return A[mid];       	
        else if (A[mid] < target)
            lo = mid+1;
        else
            hi = mid-1;
    }
    return -1;
}
void solve(ll a[],ll tc[],ll n,ll m) {
	a[n]=1000000009;
    QuickSort(a,0,n);
    ll i;
    for (i = 0; i<m; i++) {
    	printf("%lld\n",lowerbound(a,tc[i],n));
    }
    
}


int main() {
	
    ll m,i,n;
    ll tc[100005],a[100005];
    scanf("%lld",&n);
    for (i=0; i<n; i++){
    	scanf("%ld",&a[i]);
	}
	scanf("%lld",&m);
    for (i = 0; i <m; i++) {
    	scanf("%ld",&tc[i]);
    }
    solve(a,tc,n,m);  
}
