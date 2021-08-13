#include<stdio.h>
int main()
{
    char ans='Y';
    int pos,neg,zero,num;
    pos=neg=zero=0;
    while(ans=='y'||ans=='Y')
    {
        printf("\nEnter a number : ");
        scanf("%d",&num);
        if(num==0)
            zero++;
        if(num>0)
            pos++;
        if(num<0)
            neg++;
        fflush(stdin);/*Use to take the next input or its purpose is to clear 
        (or flush) the output buffer and move the buffered data to console */
        printf("\nDo you want to continue : ");
        scanf("%c",&ans);
    }
    printf("\nPositive : %d \nNegative : %d \nZero : %d ",pos,neg,zero);
    return 0;
}