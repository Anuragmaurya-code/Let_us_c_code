#include<stdio.h>
int main()
{
    int i,max,min,range,num;
    printf("Enter the number of numbers you are goona enter : ");
    scanf("%d",&i);
    int j=0;
    while(i>0)
    {
        printf("Enter the number");
        scanf("%d",&num);
        if(j==0)//because for the first time  when  while loop run the max and min value could be any garbage value so its risky to 
    //compare it with entered  number because you may get wrong answer 
        {
            max=num;
            min=num;
        }
        if(num>max)
            max=num;
        else if(num<min)
            min=num; 
        i--; 
        j++;
    }
    range =max-min;
    if(range<0)
        range=range*-1;
    printf("Range between %d and %d is %d",min,max,range);
    return 0;
}