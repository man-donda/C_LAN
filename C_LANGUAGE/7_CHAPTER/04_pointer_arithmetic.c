#include <stdio.h>

int main(){

    // POINTER ARITHMETIC USING INTEGER POINTR
    // int a = 4;
    // int* ptr = &a;
    // printf("the address of a is %u\n",&a);
    // printf("the address of a is %u\n",ptr);
    // ptr++;
    //  printf("the address of a is %u\n",ptr);

    // POINTER ARITHMETIC USING CHARACTER POINTR
    char a = 'A ';
    char* ptr = &a;
    printf("the address of a is %u\n",&a);
    printf("the address of a is %u\n",ptr);
    ptr++;
     printf("the address of a is %u\n",ptr);

    return 0;
}