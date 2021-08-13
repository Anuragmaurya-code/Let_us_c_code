#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter the number to find its factorial ");
    scanf("%d",&num);
    while(num>=1)
    {
        fact=fact*num;
        num--;
    }
    printf("Factrorial of entered number is %d",fact);
    return 0;
}