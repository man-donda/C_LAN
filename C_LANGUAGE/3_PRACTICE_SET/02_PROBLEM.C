#include <stdio.h>

int main(){
    int m1,m2,m3;

    printf("Enter your marks 1: ");
    scanf("%d", &m1);

    printf("Enter your marks 2: ");
    scanf("%d", &m2);

    printf("Enter your marks 3: ");
    scanf("%d", &m3);

    printf("your all three subjects marks is %d %d and %d\n", m1,m2,m3);

    if(m1<33 || m2<33 || m3<33){
        printf("You are failed due to less marks in individual subject(s).\n");
    }

    else if((m1+m2+m3)/3 < 40){
        printf("You are failed due to less percantages");
    }

    else{
        printf("You are Passed");
    }
    return 0;
}