#include<stdio.h>
int main()
{
    float num;
    printf("Enter a number :");
    scanf("%f",&num);
    if(num>0)
        printf("Absolute value is %f",num);
    if(num<0)
        printf("Absolute value is %f",num*-1);
    return 0;
}