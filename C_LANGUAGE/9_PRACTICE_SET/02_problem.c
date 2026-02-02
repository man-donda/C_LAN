#include <stdio.h>

typedef struct vector{
    int i;
    int j;
}V;

V sumvector(V a, V b){
    V c = {a.i + b.i, a.j + b.j};
    return c;
}

// struct vector{
//     int i;
//     int j;
// };

// struct vector sumvector(struct vector a, struct vector b){
//     struct vector c = {a.i + b.i, a.j + b.j};
//     return c;
// }

int main(){
    V v1 = {1,2};
    V v2 = {5,6};
    V v3= sumvector(v1,v2);

    printf("the vector v3 is %di and %dj", v3.i, v3.j);
    
    return 0;
}