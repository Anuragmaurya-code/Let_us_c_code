#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k;
    for(i=1;i<=30;i++)
    {
        for(j=1;j<i;j++)
        {
            for(k=1;k<j;k++)
            {
                if((pow(i,2)==pow(j,2)+pow(k,2)))
                {
                    printf("Pythagoras Triplet %d %d %d\n",i,j,k);
                }    
            }
        }
    }
    return 0;
}