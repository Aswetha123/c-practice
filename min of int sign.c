#include <stdio.h>
#include<math.h>

int main()
{
    int a=-pow(2,(sizeof(int)*8)-1);
    a=-1;
    while(a<0){
        a--;
    }
    printf("\n+ve=%d",a);

    return 0;
}
