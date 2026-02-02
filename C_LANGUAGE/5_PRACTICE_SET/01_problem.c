#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}

int main(){
    int a=10, b=15, c=20;
    printf("the average of the a, b and c is %f", average(a,b,c));
    
    return 0;
}