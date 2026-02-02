#include <stdio.h>

int factorial(int);
    // factorial(5)= 1 X 2 X 3 X 4 X 5
    // factorial(4)= 1 X 2 X 3 X 4 
    // factorial(3)= 1 X 2 X 3 
    // factorial(n)= 1 X 2 X 3 X .... X n-1 X n
    

int factorial(int n){
    if( n==1 || n==0){ //base condition
    return 1;
}
    // factorial = factorial (n - 1) X n
    return factorial(n-1)*n;
}

int main(){
    int a=4;
    printf("the factorial of the %d is %d", a ,factorial(a));
    return 0;
}