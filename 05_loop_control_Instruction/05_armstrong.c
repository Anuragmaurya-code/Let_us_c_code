#include<stdio.h>
int main()
{
    int i=2,u,t,h;
    while (i<500)
    {
        u=i%10;
        t=(i%100)/10;
        h=i/100;
        if(u*u*u+t*t*t+h*h*h == i)
        {
            printf("\n Armstrong = %d",i);
        }
        i++;
    }
    


}