#include <stdio.h>

typedef struct c{
    int real;
    int img;
}complex;

int main(){
    complex c = {1,2};
    printf("the complex number is %d + %di", c.real , c.img);
    
    return 0;
}