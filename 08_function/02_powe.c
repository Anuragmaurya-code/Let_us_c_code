#include<stdio.h>
int power(int,int);
int power(int a,int b)
{
    int pow=1;
    while(b>0)
    {
        pow=pow*a;
        b--;
    }
    return pow;
}
int main()
{
    int x,y,ans;
    printf("Enter a number :  ");
    scanf("%d %d",&x,&y);
    ans=power(x,y);
    printf("Answer is %d",ans);
    return  0;
}