#include<stdio.h>
#include<math.h>
int main()
{
    int s1,s2,s3,bs,ss;
    printf("\n Enter sides of triangle ");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2 && s2==s3 && s1==s3)
        printf("\nTriangle is scalar");
    if((s1==s2 && (s2!=s3 || s1!=s3)) || (s2==s3 && (s2!=s1 || s3!=s1)) || (s1==s3 && (s1!=s2 || s3!=s2)))
        printf("\nTriangle is isosceles");
    if(s1>s2 && s1>s3)
    {
        bs=pow(s1,2);
        ss=pow(s2,2)+pow(s3,2);
    }
    else if(s2>s1 && s2>s3)
    {
        bs=pow(s2,2);
        ss=pow(s1,2)+pow(s3,2);
    }    
    else if(s3>s1 && s3>s2)
    {
        bs=pow(s3,2);
        ss=pow(s1,2)+pow(s2,2);
    }
    if(bs==ss)
        printf("\nTriangle is right angle triangle");
    if(s1!=s2 && s2!=s3 && s1!=s3)
        printf("\nTriangle is scalene");
    return 0;
}