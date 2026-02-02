#include <stdio.h>

int* sum(int a, int b);
int* sum(int a, int b){
    int c = a + b;
    int* ptr1 = &sum;
    printf("the sum is %d\n", c);
    return ptr1;
}

float* avg(int a, int b);
float* avg(int a, int b){
    float c = (a+b)/2.0;
    float* ptr2 = &avg;
    printf("the average is %f\n", c);
    return ptr2;
}

int main(){
    int x=10,y=20;
    int* ptr1;
    float* ptr2;

    ptr1 = sum(x,y);
    ptr2 = avg(x,y);
    printf("the address of x is %u and y is %u\n",ptr1, ptr2);
    
    return 0;
}