#include <stdio.h>

int main()
{
 int number,fact,temp,sum=0,digit; 
 scanf("%d",&number);
 temp=number;
 while(temp){
     digit=temp%10;
     fact=1;
     while(digit){
         fact *= digit;
         digit--;
     }
     sum += fact;
     temp/=10;
 }
 if(sum==number)printf("yes");
 else printf("no");

}