#include<stdio.h>
#include<math.h>
#include <conio.h>
//viet ct dung ham den nhap xuat mang 1 chieu, xuat snt, tinh tong, dao mang,sap xep

void Nhap(int a[], int n){
    int i;
    for(i=0; i<n; i++)
{
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
}
}
void Xuat(int a[], int n){
    int i;
    for(i=0; i<n; i++) printf("%4d",a[i]);
}
bool nt(int n){
	if(n<2) return false;
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
void xuatnt(int a[],int n){
	int i; long sum=0;
	printf("\nCac so nguyen to trong mang:   ");
	for(i=0;i<n;i++){
		if(nt(a[i])){
			printf("%4d",a[i]);
			sum+=a[i];
		}
	}
	printf("\ntong cac so nguyen to trong mang: %ld",sum);
}
void Swap(int *a,int *b){
	int tmp =*a;
	*a=*b;
	*b=tmp;
}
void Selectionsort(int a[],int n ){ 	
	int min; // chi so phan tu nho nhat trong day
	int i,j;
	for (i=0; i<n ; i++)
	{ 
		min = i;
		for( j = i+1; j <n ; j++) if (a[j] < a[min]) min = j; // ghi nhan vi tri phan tu nho nhat
		Swap(&a[min], &a[i]);
	}
}
void dao(int a[], int n){
	int i;
	for(i=0;i<n/2;i++){
		Swap(&a[i],&a[n-i-1]);
	}
}
int main() {
    int a[100];
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    Nhap(a,n);
    printf("Mang nhap vao:                 ");
    Xuat(a,n);
    xuatnt(a,n);
    printf("\nMang sau khi sap xep tang dan: ");
    Selectionsort(a,n);
    Xuat(a,n);
    printf("\nMang sau khi sap xep giam dan: ");
    dao(a,n);
    Xuat(a,n);
    getch();
}

