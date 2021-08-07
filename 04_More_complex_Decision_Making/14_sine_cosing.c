#include<stdio.h>
#include<math.h>
int main()
{
    int ang;
    printf("Enter the angle in degree ");
    scanf("%d",&ang);
    double sum=pow(sin(ang),2)+pow(cos(ang),2);
    (sum==1?printf("The sum of squares of sine and cosine angle is 1"):printf("The sum of squares of sine and cosine angle is not 1"));
    return 0;
}