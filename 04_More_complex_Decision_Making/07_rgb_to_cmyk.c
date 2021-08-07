#include<stdio.h>
int main()
{
    int r,g,b;
    float w,c,m,y,bb,max;
    printf("Enter rgb color i.e Red Green and Blue ");
    scanf("%d %d %d",&r,&g,&b);
    if(r>g && r>b)
        max=r;
    else if(g>r && g>b)
        max=g;
    else if(b>r && b>g)
        max=b;
    w=max/225;
    c=(w-(r/225))/w;
    m=(w-(g/225))/w;
    y=((w-b/225))/w;
    bb=1-w;
    printf("The CYNK colors are \n Cyan = %f \n Magenta = %f \n Yellow= %f \n Black = %f",c,m,y,bb);
}