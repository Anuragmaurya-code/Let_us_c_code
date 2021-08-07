#include<stdio.h>
int main()
{
    int s1,s2,s3,bs,ss;
    printf("Enter three sides of triangle ");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1>s2 && s1>s3)
    {
        bs=s1;
        ss=s2+s3;
    }
    else if(s2>s1 && s2>s3)
    {
        bs=s2;
        ss=s1+s3;
    }    
    else if(s3>s1 && s3>s2)
    {
        bs=s3;
        ss=s1+s2;
    }
    (bs>ss?printf("Triangle is valid"):printf("Triangle is not valid"));
    return 0;
}