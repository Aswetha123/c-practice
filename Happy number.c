#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main()
{
    int number,sum;
    scanf("%d",&number);
    while(number!=4){
    sum=0;
    while(number){
        sum=sum+pow(number%10,2);
            number=number/ 10;
    }
    number=sum;
    if(number==1)break;
    }
        if(number==4) printf("unhappy");
        else
        printf("happy");
        return 0;
}
    
    