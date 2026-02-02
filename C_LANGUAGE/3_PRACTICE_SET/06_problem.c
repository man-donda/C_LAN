#include <stdio.h>

int main(){
    int a=6,b=8,c=199,d=99;

    if(a>b && a>c && a>d){
        printf("the greatest of all number is %d", a);
    }

    else if(b>a && b>c && b>d){
        printf("the greatest of all number is %d", b);
    }

    else if(c>a && c>b && c>d){
        printf("the greatest of all number is %d", c);
    }

    else if(d>a && d>b && d>c){
        printf("the greatest of all number is %d", d);
    }
    return 0;
}