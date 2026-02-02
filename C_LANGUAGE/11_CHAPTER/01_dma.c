#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d",&n);
    ptr = (int*) malloc(n*( sizeof(int)));
    // int arr[a]; not allowed
    ptr[0]=6;
    ptr[1]=3;
    printf("%d",ptr[0]);
    return 0;
}