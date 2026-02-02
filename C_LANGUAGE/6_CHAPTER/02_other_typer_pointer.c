#include <stdio.h>

int main(){
    char i='A';
    char* j=&i;// j is a pointer pointing to i.(j is character pointer)

    float k=3.147;
    float* k1=&k;

    printf("The address of the i is %p\n", &i);
    printf("The address of the i is %p\n", j);
    printf("the address of the k is %p\n", &k);

    printf("the value at address j is %d\n", *j);
    printf("the value at address i is %d\n", *(&i));
    return 0;
}