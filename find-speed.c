#include<stdio.h>

void main()
{
    float d, t, speed;

    printf("Enter distance: ");
    scanf("%f",&d);

    printf("Enter time: ");
    scanf("%f",&t);

    speed = d / t;

    printf("Speed = %f",speed);

    getch();
}