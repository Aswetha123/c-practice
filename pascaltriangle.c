#include <stdio.h>

int main()
{
    int rows,i,j,c,value;
    //input the no of rows for triangle
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        //print spaces for alignment
        for(int j=0;j<rows-i;j++){
        printf(" ");
    }
    
    
    //compute and print values in the current row
 //the first value in each row is 1
    value=1;
    for(j=0;j<=i;j++){
        printf("%d  ",value);
        value=value*(i-j)/(j+1);
    }
    printf("\n");
}
}
