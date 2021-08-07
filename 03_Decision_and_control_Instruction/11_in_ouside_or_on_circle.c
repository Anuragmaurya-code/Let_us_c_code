#include<stdio.h>
#include<math.h>
int main()
{
    //coordinates of centre of circle
    int x1,y1;
    //coordinates of points
    int x2,y2;

    int rad,dis;
    printf("Enter the coordinates of circle");
    scanf("%d %d",&x1,&y1);
    printf("Enter the radius of circle ");
    scanf("%d",&rad);
    printf("Enter the coordinates of points");
    scanf("%d %d",&x2,&y2);
    //distance between point and center of circle
    dis=sqrt(pow((y2-y1),2)+pow((x2-x1),2));
    if (dis<rad)
        printf("point is within circle");
    else 
        if(dis==rad)
            printf("point is on the circle");
        else
            printf("point is outside the circle");


}