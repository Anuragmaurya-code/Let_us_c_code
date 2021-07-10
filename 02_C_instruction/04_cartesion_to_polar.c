#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r;
    double teta;
    printf("\nEnter the cartesian coordinate");
    scanf("%f %f",&x,&y);
    r=sqrt(x*x+y*y);
    teta=atan(y/x);
    teta=teta*180/3.14;
    printf("\n%f",teta);
    return 0;

}