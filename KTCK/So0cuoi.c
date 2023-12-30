#include <stdio.h>
#include <conio.h>

#define ll long long
ll last0tq(ll s,ll e){
    ll dem=0,pro=1,i;
    for (i = s; i <= e; i++)
    {
        pro*=1;
        while (pro%10==0)
        {
            pro/=10;
            dem++;
        }
        
    }
    return dem;  
}


ll last0(ll n){
  if (n == 0) return 0;
  ll k = 1,tz = 0;
  while (pow(5,k) <= n){
    tz += n/pow(5,k);
    k += 1;
  }
  return tz;
}

ll last0rr(ll s,ll e){
    if (e==s){
        ll dem=0;
        while (e%10==0)
        {
            dem++;
            e/=10;
        }
        return dem;
        
    }
    return last0(e)-last0(s-1);
}

int main(){
    ll a,b;
    printf("Nhap so bat dau:");scanf("%lld",&a);
    printf("Nhap so ket thuc:");scanf("%lld",&b);
    printf("KQ cua phuong phap roi rac: %lld",last0rr(a,b));
    printf("\nKQ cua phuong phap lien tuc: %lld",last0tq(a,b));
    return 0;
}

