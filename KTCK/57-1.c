#include <stdio.h>
#include <stdlib.h>
#define mx 1000
long arr[mx][mx];

int main(){
    long n,m; 
    printf("nhap n:");scanf("%ld",&n);
    printf("nhap m:");scanf("%ld",&m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; i++)
        {
            arr[i][j]=0;
        } 
    }
    long long dem=1,x=0,y=-1;
    while (dem<=m*n)
    { 
        while (y<m-1)
        {
            y++;
            if(arr[x][y]==0){
                arr[x][y]=dem;
                dem++;
            }
            else {y--;break;}
        }
        while (x<n-1)
        {
            x++;
            if(arr[x][y]==0){
                arr[x][y]=dem;
                dem++;
            }
            else {x--;break;}
        }
        while (y>0)
        {
            y--;
            if(arr[x][y]==0){
                arr[x][y]=dem;
                dem++;
            }
            else {y++;break;}
        }
        while (x>0)
        {
            x--;
            if(arr[x][y]==0){
                arr[x][y]=dem;
                dem++;
            }
            else {x++;break;}
        }        
    }
    
    printf("ma tran xoan oc:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%8ld",arr[i][j]);
        }
        printf("\n"); 
    }
    
}