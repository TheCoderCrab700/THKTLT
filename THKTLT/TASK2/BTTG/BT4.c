#include <stdio.h>
#include <math.h>

double tinh(double x,int n){
    double ans=1;
    for(int i=1;i<=2*n;i++){
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
        printf("%lf \n",tinh(x,n));
        ans+=tinh(x,n);
        n+=1;
    }
    
    printf("Ch(x) %lf",ans);
}