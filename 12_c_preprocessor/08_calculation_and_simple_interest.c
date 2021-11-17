//everything is working fine, not practicing much problem because they are one and same
#include<stdio.h>
#include "areaperi.h"
#include "09_simple_interest.h"
int main()
{
    float x,y;
    x=PERIMETER(5,3);//like perimeter area and all other could also be find easily
    y=AMOUNT(10000,3.875,5);
    printf("%f is perimeter of triangle\n%f is the amount ",x,y);
    return 0;
}