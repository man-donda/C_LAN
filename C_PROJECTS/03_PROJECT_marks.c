#include <stdio.h>

int main()
{
    int m1, m2, m3, tm, per;

    printf("Enter English subject's Marks: ");
    scanf("%d", &m1);
    printf("Enter Maths subject's Marks: ");
    scanf("%d", &m2);
    printf("Enter Science subject's Marks: ");
    scanf("%d", &m3);

    tm = m1 + m2 + m3;

    printf("Your total marks is %d\n", tm);

    per = (m1 + m2 + m3) / 3;

    printf("you got %d percantage\n", per);

    if (m1 < 33 || m2 < 33 || m3 < 33)
    {
        printf("You are failed in perticular subject.");
    }

    else if (m1 < 33 && m2 < 33 || m2 < 33 && m3 < 33 || m3 < 33 && m1 < 33)
    {
        printf("You are failed in Two subjects.");
    }

    else if (m1 < 33 && m2 < 33 && m3 < 33)
    {
        printf("You are failed in all subjects.");
    }

    else if(per<40){
        printf("You are failed due to low percantages.");
    }

    else if (per <= 100 && per >= 90)
    {
        printf("your grade is A");
    }

    else if (per <= 90 && per >= 80)
    {
        printf("your grade is B");
    }

    else if (per <= 80 && per >= 70)
    {
        printf("your grade is C");
    }

    else if (per <= 70 && per >= 60)
    {
        printf("your grade is D");
    }

    else if (per <= 60 && per >= 50)
    {
        printf("your grade is E");
    }

    else
    {
        printf("your grade is F");
    }

    return 0;
}