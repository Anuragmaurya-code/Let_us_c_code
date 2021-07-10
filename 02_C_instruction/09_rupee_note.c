#include<stdio.h>
int main()
{
    int amount;
    printf("\nEnter the amount");
    scanf("%d",&amount);
    if((amount/100)>0)
    {
        int hun=amount/100;
        printf("\nNumber of hundred notes is %d",hun);
        amount=amount-(100*hun);

    }
    if((amount/50)>0)
    {
        int fif=amount/50;
        printf("\nNumber of fifty notes is %d",fif);
        amount=amount-(50*fif);

    }
    if((amount/10)>0)
    {
        int ten=amount/10;
        printf("\nNumber of ten notes is %d",ten);
        amount=amount-(10*ten);

    }
    if((amount/5)>0)
    {
        int fiv=amount/5;
        printf("\nNumber of five notes is %d",fiv);
        amount=amount-(5*fiv);

    }
    if((amount/2)>0)
    {
        int two=amount/2;
        printf("\nNumber of two notes is %d",two);
        amount=amount-(2*two);

    }
    if((amount/1)>0)
    {
        int one=amount/1;
        printf("\n2Number of one notes is %d",one);
        amount=amount-(1*one);

    }

}