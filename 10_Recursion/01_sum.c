#include<stdio.h>
int sum(int);
int main()
{
    int x=13345,s=0;
    s=sum(x);
    printf("%d",s);
    return 0;
}
int sum(int x)
{
    if(x/10==0)
        return x%10;
    else 
        return x%10+sum(x/10);
}