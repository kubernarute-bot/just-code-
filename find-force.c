#include<stdio.h>

void main()
{
    float m,a,f;

    printf("Enter mass: ");
    scanf("%f",&m);

    printf("Enter acceleration: ");
    scanf("%f",&a);

    f = m*a;

    printf("Force = %f N",f);

    getch();
}