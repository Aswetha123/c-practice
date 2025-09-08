#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5,s6,sum=0;
    float avg;
    scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
    sum=(s1+s2+s3+s4+s4+s5+s6);
    avg=(sum/6.0);
    if(avg>70) printf("distinction");
    else if(avg>60) printf("1st class");  
    else if(avg>50) printf("2nd class");
    else if(avg>40) printf("3st class");
    else printf("\n Fail");
    return 0;
}
