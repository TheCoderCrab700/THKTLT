#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void Input(int a[], int n)
{ int i;
for(i=0;i<n;i++)
{
a[i]=rand()%1000+1;
}
}
void Swap(int *a,int *b){
int tmp =*a;
*a=*b;
*b=tmp;
}
void SelectionSort(int a[],int n )
{ int min; // chi so phan tu nho nhat trong day
int i,j;
for ( i=0; i<n-1 ; i++)
{ min = i;
for( j = i+1; j <n ; j++)
if (a[j] < a[min])
min = j; // ghi nhan vi tri phan tu nho nhat
Swap(&a[min], &a[i]);
}
}
void Output(int a[], int n)
{ int i;
for(int i=0;i<n;i++) printf("%10d",a[i]);
}
int main(){
int a[10000];
int n;
clock_t start,end;
printf("nhap so luong phan tu :");
scanf("%d",&n);
Input(a,n);
start=clock();
SelectionSort(a,n);
end=clock();
Output(a,n);
printf("\nXung bat dau: %ld",start);
printf("\nXung ket thuc: %ld",end);
getch();
}