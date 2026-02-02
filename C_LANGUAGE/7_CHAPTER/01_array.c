#include <stdio.h>

int main(){
    int marks[90]; //reserve space to store 90 integers

    marks[0]=35;
    marks[1]=45;
    //we can go all the way till marks[89]
    printf("marks 1 and marks 2 is %d and %d",marks[0],marks[1]);
    return 0;
}