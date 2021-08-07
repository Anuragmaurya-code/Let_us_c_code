#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter point x,y ");
    scanf("%d %d",&x,&y);
    if (x==0)
        printf("Point lies on y axis");
    else
    {
        if(y==0)
            printf("Point lies on x axis");
        else
            printf("Point neither lies on X axis nor Y axis");
    }

    return 0;
}