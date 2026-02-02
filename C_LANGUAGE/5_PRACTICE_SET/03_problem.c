#include <stdio.h>

float force(float);
float force(float mass){
    return mass*9.8;
}
int main(){
    
    int m=38;
    printf("the value of the force is %f", force(m));
    return 0;
}