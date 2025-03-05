#include <stdio.h>

int main()
{
 int row;
 scanf("%d",&row);
for(int i=1;i<=row;i++){
    for(int j=1;j<=i;j++){
        if(i==1||i==row||j==1||i==j)
        printf("$");
        else  
        printf(" ");
}
        printf("\n");

}
return 0;
}

    
