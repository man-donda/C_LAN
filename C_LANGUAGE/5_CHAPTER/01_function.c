#include <stdio.h>

int sum(int, int);
int sum(int x, int y){
    // printf("the sum is %d\n", x+y);
    return x+y;
}


int main(){
    int a=22;
    int b=24;

    int c=sum(a,b);
    printf("%d\n", c);
    // sum(a,b);
    // int c=a+b;
    // printf("the sum is %d\n", c);

    int a1=55;
    int b1=16;

    int c1=(a1+b1);
    printf("%d\n", c1);

    // sum(a1,b1);
    // int c1=a1+b1;
    // printf("the sum is %d\n", c1);

    int a2=11;
    int b2=56;

    int c2=(a2+b2);
    printf("%d\n", c2);
    // sum(a2,b2);
    // int c2=a2+b2;
    // printf("the sum is %d\n", c2);

    return 0;
}