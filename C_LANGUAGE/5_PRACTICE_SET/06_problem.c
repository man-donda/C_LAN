#include <stdio.h>

int sum_natural(int);
int sum_natural(int n){
    if(n==1){
    return 1;
    }
    return  sum_natural(n-1)+n;
}

int main(){
    int n=10;
    printf("sum of the first %d natural numbers is %d",n,sum_natural(n));
    return 0;
}