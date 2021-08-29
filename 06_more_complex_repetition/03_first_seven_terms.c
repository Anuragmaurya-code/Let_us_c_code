#include<stdio.h>
int main()
{
    int i,j;
    float fact,add=0.0;
    for(i=1;i<=7;i++)
    {
        fact=1.0;
        for(j=1.0;j<=i;j++)
            fact=fact*j;   /*dont use j as factorial because it will affect loop and up end up 
                           getting wrong answer because loop will be exited first*/
        add=add+i/fact;
    }
    printf("addition %f",add);
    return 0;
}