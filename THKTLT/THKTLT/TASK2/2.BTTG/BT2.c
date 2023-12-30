#include <stdio.h>
#include <math.h>
#define esp 1e-6
double tinh(double x,int n){
    double ans=pow(-1,n);
    int i;
    for(i=1;i<=2*n;i++){
        ans=(double)ans*x/i;
    }
    return ans;
}


int main(){
    double ans ,x;
    printf("Nhap x: ");
    scanf("%lf",&x);
    int n=0;
    x=x/180*M_PI;
    while (fabs(tinh(x,n))>esp)
    {
        ans+=tinh(x,n);
        n+=1;
    }
    printf("KQ Khai trien Taylor-Mac :cos(x)= %lf",ans);
    printf("\nKQ thuc te :cos(x)=%.6lf",cos(x));
    getch();
}
