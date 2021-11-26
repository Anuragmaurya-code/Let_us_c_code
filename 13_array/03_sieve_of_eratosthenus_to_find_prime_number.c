#include<stdio.h>
int main()
{
    int num[101],i,j,k;
    for(i=1;i<=100;i++)//considering from position  1
    {
        num[i]=i;
    }
    for(j=2;j<100;j++)
    {
        if(num[j]==0)
        continue;//do not consider zero value one
        for(k=j+1;k<=100;k++)
        {
            if(num[k]%j==0)
                num[k]=0;
        }


    }
    for(i=1;i<=100;i++)//printing the array
    {
        if(num[i]!=0)
        printf("%d\n",num[i]);
    }
    return 0;
}