#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float w;
    float h;

    printf("Enter Weight in kilogram: ");
    scanf(" %f",&w);
    printf("Enter Height in meter: ");
    scanf(" %f",&h);

    printf("BMI :  %.2f: ",(w/pow(h,2))    );

    return 0;
}