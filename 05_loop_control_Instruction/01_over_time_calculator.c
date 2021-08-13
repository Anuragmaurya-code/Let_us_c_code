#include<stdio.h>
int main()
{
    int i=1,hours,overtime;
    while (i<11)
    {
        printf("\nEnter the nuumber of hours you worked ");
        scanf("\n%d",&hours);
        if(hours>40)
        {
            overtime=(hours-40)*12;
        }
        else
        {
            overtime=0;
        }
        printf("\nMoney earned by overtime : %d",overtime);
        i++;
    }
    
    
    return 0;
}