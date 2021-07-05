#include<stdio.h>
int main()
{
    float far,cel;
    printf("Enter the temperature in Farenheit\n");
    scanf("%f",&far);
    cel=(far-32)/1.8;
    printf("Celcius %f",cel);
    return 0;

}