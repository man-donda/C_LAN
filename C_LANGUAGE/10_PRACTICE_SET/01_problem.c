#include <stdio.h>

int main(){
FILE *ptr;
int num1, num2 ,num3;
ptr=fopen("file.txt","r");
fscanf(ptr,"%d %d %d",&num1, &num2, &num3);
printf("the values are %d %d and %d",num1,num2,num3);
    return 0;
}