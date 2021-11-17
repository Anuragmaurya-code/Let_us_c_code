#include <stdio.h>
int funct();
int t;
int main(void) {
	// your code goes here
	int i=1;
	scanf("%d",&t);
	int res[t];
	while(i<=t)
	{
	    res[i]=funct();
	    i++;
	}
	
	for(i=1;i<=t;i++)
	{
	    if(res[i]==0) 
	        printf("PATROL\n");
	    else if(res[i]==1)
	        printf("DIESEL\n");
	    else
	        printf("SAME PRICE\n");
	}
	return 0;
}
int funct()
{
    int x,y,a,b,k,i=0,sum1=0,sum2=0;
    scanf("%d %d %d %d %d",&x,&y,&a,&b,&k);
    sum1=sum1+x*k;
    sum2=sum2+y*k;

    if(sum1<sum2)
        return 0;
    else if(sum2<sum1)
        return 1;
    else
        return 2;
        
}
