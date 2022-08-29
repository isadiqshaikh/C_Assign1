#include<stdio.h>
int main()
{
    float r;
    float a;
    printf("\n Enter the radius of Circle:");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("\nArea of Circle is %f having the radius %.2f",a, r);
    return 0;
}

