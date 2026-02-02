#include <stdio.h>

int main(){
    int age=70;
    if(age>65){
        printf("you can drive and you are senior citizen");
    }
    else if(age>45){
        printf("you can drive and you are elder.");
    }
    else if(age>18){
        printf("you can drive");
    }
    else{
        printf("you can not drive");
    }

    return 0;
}