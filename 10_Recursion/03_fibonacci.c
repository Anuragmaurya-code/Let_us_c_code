#include<stdio.h>
int fibo(int,int);
int main()
{
    int n1=1,n2=1;
    printf("%d ",n1);
    fibo(n1,n2);
}
int fibo(int n1,int n2)
{
    int static x=1;
    if(x<=24)
    {
        printf("%d ",n2);
        x++;
        fibo(n2,n1+n2);
    }
    else 
        return 0;
    
}