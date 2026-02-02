#include <stdio.h>

struct vector{
    int i;
    int j;
};

int main(){
    struct vector v = {1,2};
    printf("the vector is %di and %dj", v.i , v.j);
    
    return 0;
}