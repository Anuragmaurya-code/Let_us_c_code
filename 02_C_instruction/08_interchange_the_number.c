#include<stdio.h>
int main()
{
    int first,second,midterm;
    printf("\nEnter first number : ");
    scanf("%d",&first);
    printf("\nEnter second number : ");
    scanf("%d",&second);
    midterm=first;
    first=second;
    second=midterm;
    printf("\nFirst number after swapping %d ",first);
    printf("\nSecond number after swapping %d ",second);



}