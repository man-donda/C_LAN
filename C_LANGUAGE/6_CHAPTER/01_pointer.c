#include <stdio.h>

int main(){
    int i=72;
    int* j = &i;// j is a pointer pointing to i.(j is integer pointer)
    int k=67;
    printf("The address of the i is %p\n", &i);
    printf("The address of the i is %p\n", j);
    printf("the address of the k is %p\n", &k);

    printf("the value at address j is %d\n", *j);
    printf("the value at address i is %d\n", *(&i));
    return 0;
}