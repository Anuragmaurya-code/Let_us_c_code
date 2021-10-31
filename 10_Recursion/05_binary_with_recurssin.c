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
    static int bin=0,fact=1;
    if(num==0)
        return bin;
    else
    {
        bin=bin+num%2*fact;
        fact=fact*10;
        rec(num/2);
    }
}
