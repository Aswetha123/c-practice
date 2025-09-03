#include <stdio.h>
void recursion(int n){
    if(n>1){
    printf("\n recursion fun executing..");
    recursion(n-1);
    }
printf("\nrecursive function returning to..");
}
int main(){
    printf("started execution..");
    recursion(3);
}    
