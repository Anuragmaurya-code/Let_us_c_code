#include<stdio.h>
int main()
{
    int exit=1;
    while (exit)
    {
    int i;
    printf("1.Factorial of a number\n");
    printf("2.Prime or not\n");
    printf("3.Odd or even\n");
    printf("4.Exit\n");
    scanf("%d",&i);
    switch (i)
    {
    case 1:;
        int factnum,fact=1;
        printf("Enter a number : ");
        scanf("%d",&factnum);
        while(factnum>0)
        {
            fact=fact*factnum;
            factnum--;
        }
        printf("Factorial of entered number is %d\n",fact);
        break;
    case 2:;
        int primenum,prime=1,num2=2;
        printf("Enter a number : ");
        scanf("%d",&primenum);
        while(num2<primenum)
        {
            if(primenum%num2==0)
            {
                prime=0;
                break;
            }
            else
                num2++;
        }
        if(prime)
            printf("Entered number is prime\n");
        else
            printf("Entered number is not prime\n");
        break;
    case 3:;
        int num;
        printf("Enter a number : ");
        scanf("%d",&num);
        if(num%2==0)
            printf("Entered number is even\n");
        else
            printf("Entered number is odd\n");
        break;
    case 4:
        exit=0;
        break;
    default:
        printf("Enter a valid number\n");
        break;
    }
    }
    return 0;
}