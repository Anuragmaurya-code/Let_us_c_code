#include<stdio.h>
int rec(int);
int main()
{
    int num,bin;
    printf("Enter a  number");
    scanf("%d",&num);
    bin=rec(num);
    printf("%d",bin);
}
int rec(int num)
{
    int fact=1,bin=0;
    while(num>0)
    {
        bin=bin+num%2*fact;
        num=num/2;
        fact=fact*10;
    }
    return bin;
}
