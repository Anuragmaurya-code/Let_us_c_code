//unable to get it
#include<stdio.h>
#include<math.h>
int sfun(float *,float);
int main()
{
    float result=0,x=45;
    sfun(&result,x);  
    printf("%f",result);
}
int sfun(float *res,float x)
{
    int y=1,j=1,k=1;
    while(j<=10)
    {
        int l=1;
        while(y==0)
        {
            l=l*y;
            y--;
        }
        *res=*res+(pow(x,y)/l)*k;
        y+=2;
        j++;
        k*=-1;

    }
}