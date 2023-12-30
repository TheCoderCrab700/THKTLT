#include<stdio.h>

int main() {
	printf("Giai phuong trinh ax^4 +bx^2+c,(a#0)\n");
	double a,b,c,dt;
	printf("Nhap a:");scanf("%lf",&a);
	printf("Nhap b:");scanf("%lf",&b);
	printf("Nhap c:");scanf("%lf",&c);
	
	dt=b*b-4*a*c;
	//truong hop 0 nghiem
	if ((dt>=0 && b*a>0 && c*a>0)||(dt<0)){
		printf("Phuong trinh vo nghiem");
	}
	//truong hp 1 nghiem 
	if(c==0 && b*a>=0){
		printf("phuong trinh co mot nghiem la x1=0");
	}
	//truong hop 2 nghiem
	if((dt==0 && b*a<0)||(b==0 && a*c<0)){
		printf("Phuong trinh co 2 nghiem:\n");
		double t1=(double)(-b+sqrt(dt))/2*a;
		double x1=(double)(sqrt(t1)),x2=(double)-(sqrt(t1));
		printf("x1=%lf\nx2=%lf\n",x1,x2);
	}
	//truong hop 3 nghiem
	if(c==0 && b*a<0){
		printf("Phuong trinh co 3 nghiem:\n");
		double t1=(double)(-b+sqrt(dt))/2*a;
		double x1=(double)(sqrt(t1)),x2=(double)-(sqrt(t1));
		printf("x1=%lf\nx2=%lf\nx3=0",x1,x2);
	}
	//truong hop 4 nghiem
	if(dt>=0 && a*b<0 && a*c>0){
		printf("Phuong trinh co 4 nghiem:\n");
		double t1=(double)(-b+sqrt(dt))/2*a;
		double x1=(double)(sqrt(t1)),x2=(double)-(sqrt(t1));
		double t2=(double)(-b-sqrt(dt))/2*a;
		double x3=(double)(sqrt(t2)),x4=(double)-(sqrt(t2));
		printf("x1=%lf \nx2=%lf \nx3=%lf \nx4=%lf \n",x1,x2,x3,x4);
	}
	getch();
	return 0;
}

