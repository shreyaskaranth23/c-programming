#include <stdio.h>

float main (void)
{
    float r,area;
    printf ("Enter the radius of the circle:");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("area=%f\n",area);
    return 0;
}