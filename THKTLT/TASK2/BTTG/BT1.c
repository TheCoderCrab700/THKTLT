#include <stdio.h>
#include <math.h>

double tinh(double x,int n){
    double ans=pow(-1,n);
    for(int i=1;i<=2*n+1;i++){
        ans=(double)ans*x/i;
    }
    return ans;
}


int main(){
    double ans ,x;
    printf("Nhap x: ");
    scanf("%lf",&x);
    int n=0;
    while (fabs(tinh(x,n))>pow(10,-6))
    {
        ans+=tinh(x,n);
        n+=1;
    }
    
    printf("sin(x)= %lf",ans);
}