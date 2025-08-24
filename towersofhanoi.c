#include <stdio.h>
void Hanoi(int n,char s,char d,char a){
    if(n==1)
    printf("\nstep %d::disk %d from %c to -> %c",++step,n,s,d);
    else{
        Hanoi(n-1,s,a,d);
        printf("\nstep %d::disk %d from %c to -> %c",++stezzs,d);
        Hanoi(n-1,a,d,s);
    }
}
void main(){
    Hanoi(3,'s','D','A');
}
