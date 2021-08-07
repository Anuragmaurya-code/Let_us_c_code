#include<stdio.h>
int main()
{
    int num;
    printf("Enter a five digit number :");
    scanf("%d",&num);
    int l5=num%10;
    num=num/10;
    int l4=num%10;
    num=num/10;
    int l3=num%10;
    num=num/10;
    int l2=num%10;
    num=num/10;
    int l1=num;
    if(l5==l1&l2==l4)
        printf("The Entered number reverse is equal to entered number i.e %d%d%d%d%d",l5,l4,l3,l2,l1);
    else
        printf("The Entered number reverse is not equal to entered number i.e %d%d%d%d%d",l5,l4,l3,l2,l1);



    return 0;
}