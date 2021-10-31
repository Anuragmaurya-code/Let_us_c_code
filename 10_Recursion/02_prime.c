#include<stdio.h>
void prime(int);
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    prime(num);
}
void prime(int num)
{
    static i=2;
    if(i<num)
    {
        if(num%i==0)
        {
            printf("\n%d",i);
            num=num/i;
            i++;
        }
        else
            i++;
        prime(num);
    }
    
}