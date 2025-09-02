#include <stdio.h>

int main()
{
    for(int it=1;it<=100;it++){
        if(it%20==0)
        break;
      printf("%d",it);
    }
    return 0;
}
