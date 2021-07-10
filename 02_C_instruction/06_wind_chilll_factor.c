#include<stdio.h>
#include<math.h>
int main()
{
    float temp,vel,wcf;
    printf("\nWrite the temperature : ");
    scanf("%f",&temp);
    printf("\nWrite the velocity : ");
    scanf("%f",&vel);
    wcf=35.74+0.6215*temp+(0.4275*temp-35.75)*pow(vel,0.16);
    printf("\nWind Chill Factor is %f",wcf);
}