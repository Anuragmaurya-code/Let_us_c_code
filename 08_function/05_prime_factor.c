#include<stdio.h>
int primefactor(int);//prototype of function primefactor
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    primefactor(num);
    return 0;
}

int primefactor(int n)
{
    int i=2;
    printf("Prime factors are ");
    while (n!=1)//run until and unless entered number become 1
    {
        if(n%i==0)//fully divisible without remainder
            printf("%d",i);
        else
        {
            i++;//if not fully divisible increment value of i
            continue;//go back to start
        }
        n=n/i;//if fully divisible new value is given to n after division
    }
    
}