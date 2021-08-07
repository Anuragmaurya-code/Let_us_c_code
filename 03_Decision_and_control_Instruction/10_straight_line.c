#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    int s1,s2,s3;
    printf("Enter the values of x1,y1 ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the values of x2,y2 ");
    scanf("%d %d",&x2,&y2);
    printf("Enter the values of x3,y3 ");
    scanf("%d %d",&x3,&y3);
    //slope of line x1,y1 / x2,y2 / x3,y3
    s1=abs(x2-x1)/abs(y2-y1);
    s2=abs(x3-x2)/abs(y3-y2);
    s3=abs(x1-x3)/abs(y1-y3);
    if((s1==s2) && (s1==s3))
        printf("Points are in straight line");
    else
        printf("Points are not in straight line");
    return 0;
}

