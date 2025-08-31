#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i+=2){
        for(int j=1;j<=n;j++){
            printf("%.2d",i*n+j);
        }printf("\n");
    }
    int start;
    start = n&1 ? n-2 : n-1;
    for(int i=start;i>0;i-=2){
        for(int j=1;j<=n;j++){
            printf("%.2d",i*n+j);
        }printf("\n");
    }
    return 0;
}
