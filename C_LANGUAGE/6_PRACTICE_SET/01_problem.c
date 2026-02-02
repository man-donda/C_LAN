#include <stdio.h>

int main()
{
    int i = 2;
    int *j = &i;
    printf("the address of i is %u\n", &i);
    printf("the value at i is %d", *j);
    return 0;
}