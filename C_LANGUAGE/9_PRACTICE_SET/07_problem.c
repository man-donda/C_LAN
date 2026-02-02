#include <stdio.h>

typedef struct c
{
    int real;
    int img;
} complex;

void show(complex c)
{
    printf("the complex number is %d + %di\n", c.real, c.img);
}

int main()
{
    complex carr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter real number: \n");
        scanf("%d", &carr[i].real);
        printf("Enter imaginary number: \n");
        scanf("%d", &carr[i].img);
        show(carr[i]);
    }
    return 0;
}