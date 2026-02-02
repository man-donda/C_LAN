#include <stdio.h>
#include <stdlib.h>

int main(){
    float n=5;
    float* ptr;
    
    ptr = (float*) malloc(n*( sizeof(float)));

    ptr[0]=45.39;
    ptr[1]=35.39;
    ptr[2]=42.39;
    ptr[3]=85.39;
    ptr[4]=56.39;
 
    printf("%.2f\n",ptr[0]);
    printf("%.2f\n",ptr[1]);
    printf("%.2f\n",ptr[2]);
    printf("%.2f\n",ptr[3]);
    printf("%.2f\n",ptr[4]);
    return 0;
}