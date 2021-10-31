#include<stdio.h>
int fsum(int);
int main()
{
    int sum=0;
    sum=fsum(0);
    printf("%d",sum);
    return 0;
}
int fsum(int i)
{
    if(i>=25)
        return 0;
    else
        return i + fsum(i+=1);
}