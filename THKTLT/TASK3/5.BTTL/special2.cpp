#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int Compare (const void * a, const void * b){
 return ( *(int*)a - *(int*)b );
}
void Input(int a[], int n){ 
int i;
for(i=0;i<n;i++)
{
a[i]=rand()%10000+1;
}
}
void Swap(int *a,int *b){
int tmp =*a;
*a=*b;
*b=tmp;
}
void QuickSort(int a[], int left, int right){
 int i = left, j = right;
 int pivot = a[(left + right) / 2]; // Lay pivot là phan tu giua
 do
 {
 // Tìm vi trí i, j can hoán vi
 while (a[i] > pivot && i < right) i++;
 while (a[j] < pivot && j > left) j--;
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
void Output(int a[], int n){ 
int i;
for(int i=0;i<n;i++) printf("%10d",a[i]);
}
int main(){
int a[100000],A[100000];
int n;
clock_t start,end;
printf("nhap so luong phan tu :");
scanf("%d",&n);
Input(a,n);
start=clock();
QuickSort(a,0,n-1);
end=clock();
Output(a,n);
printf("\nXung bat dau: %ld",start);
printf("\nXung ket thuc: %ld",end);
start=clock();
Input(A, n);
qsort(A, n, sizeof(int), Compare);
end=clock();
Output(A,n);
printf("\nXung bat dau: %ld",start);
printf("\nXung ket thuc: %ld",end);
getch();

}


