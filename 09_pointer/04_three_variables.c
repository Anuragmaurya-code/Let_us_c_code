#include<stdio.h>
void cir(int *,int *,int *);
int main()
{
    int x=5,y=6,z=7;
    cir(&x,&y,&z);
    printf("%d %d %d",x,y,z);
}

void cir(int *x,int *y,int *z)
{
    int k;
    k=*x;
    *x=*y;
    *y=*z;
    *z=k;
}
