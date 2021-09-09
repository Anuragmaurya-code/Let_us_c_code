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
    int i,j;
    for(i=2;i<=n;i++)//checking if number entered is prime or not
    {
        if(n%i==0)
            break;
    }
    if(n==i)
        printf("%d is prime there doesnt have prime factor\n",i);
    else
    {
        for(j=2;j<n;j++)//finding prime factor 
        {
            if(n%j==0)
            {
                for(i=2;i<=j;i++)//checking if prime factor is  a prime number
                {
                    if(j%i==0)
                    break;
                }
                if(j==i) 
                    printf("Prime factor is %d",j);

            }
        }
    }
}