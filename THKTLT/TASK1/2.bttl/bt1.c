#include <stdio.h>
int main ()
{
	float R, V, pi, S;
	printf("Nhap vao ban kinh R: ");
	scanf("%f",&R);
	pi=3.14;
	V=4*pi*R*R*R;
	S=4*pi*R*R;
	printf("the tich V cua hinh cau la: %f\n", V);
	printf("dien tich S cua hinh cau la: %f\n", S);\
	getch();
}
