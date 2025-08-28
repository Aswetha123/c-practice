#include <stdio.h>

int main()
{
    int row;
    printf("enter th no of rows=");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i+1;j++){
            if(i==1 || j==row-i+1)
            printf("7");
            else
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}
