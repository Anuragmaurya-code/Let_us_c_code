#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l;
    for(i=1;i<50;i++)
        for(j=1;j<50;j++)
            for(k=1;k<50;k++)
                for(l=1;l<50;l++)
                {
                    if((i!=j && i!=k && i!=l && j!=k && j!=l && k!=l) && (i*i*i+j*j*j==k*k*k+l*l*l) && (l<k))
                        printf("%d %d and %d %d are Ramanujan\n",i,j,k,l);
                }
    return 0;