#include <stdio.h>
  int fib_value(int pos){
     if(pos<=1) return pos;
     else  return fib_value(pos-1)+fib_value(pos-2);
 }

int main()
{
     int pos;
    scanf("%d ",&pos);
    for(int val=0;val<=pos;val++)
    printf("%d ",fib_value(val));
}

