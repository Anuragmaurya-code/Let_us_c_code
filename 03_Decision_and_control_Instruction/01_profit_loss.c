#include<stdio.h>
int main()
{
    float cp,sp;
    printf("\nEnter the cost price of item ");
    scanf("%f",&cp);
    printf("\nEnter the selling price of item ");
    scanf("%f",&sp);
    if (sp>cp)
        printf("\nYou made a profit of %f",sp-cp);
    else
        printf("\nYou made a loss of %f",cp-sp);
    return 0;
}