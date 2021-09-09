#include<stdio.h>
int fact(int);
int main()
{
    int num,ans;
    printf("Enter a number to find its factorial\n");
    scanf("%d",&num);
    ans=fact(num);
    printf("Factorial of entered number is %d",ans);
    return 0;
}
int fact(int num2)
{
    int j=1;
    while (num2>1)
    {
        j=j*num2;
        num2--;
    }
    return j;
}