#include<stdio.h>
int main()
{
    float len,bre,rad;
    printf("Enter the lenght and breath of rectangle\n");
    scanf("%f %f",&len,&bre);
    printf("Enter the radius of circle\n");
    scanf("%f",&rad);
    printf("Area of rectangle %f \n",len*bre);
    printf("Perimeter of rectangle %f \n",2*(len+bre));
    printf("Area of circle %f \n",3.14*rad*rad);
    printf("Circumfernce of circle %f\n",2*3.14*rad);
    return 0;

}