#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d",&n);
    // ptr = (int*) calloc(n, sizeof(int));
    ptr = (int*) malloc(n * (sizeof(int)));
    // int arr[a]; not allowed
    ptr[0]=3;
    free(ptr);
    
    printf("%d",ptr[0]);
    // free(ptr);
    return 0;
}