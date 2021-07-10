#include<stdio.h>
#include<math.h>
#define PI 3.14159265
int main()
{
    float s,c,t,ang,val;
    val=PI/180;
    printf("\nEnter the angle : ");
    scanf("%f",&ang);
    s=sin(ang*val);
    c=cos(ang*val);
    t=tan(ang*val);
    printf("\nSin of entered angle is %f",s);
    printf("\nCos of entered angle is %f",c);
    printf("\nTan of entered angle is %f",t);

}