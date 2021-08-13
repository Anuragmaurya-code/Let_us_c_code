#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,num2,oct,p;
    //p is for deciding weather the number would be at unit,ten or hundred position
    p=oct=0;//p=0 is for units place
    printf("Enter the number to find its octal equivalent value ");
    scanf("%d",&num);
    num2=num;
    while(num>0)
    {
        rem=num%8;
        num=num/8;
        oct=oct+rem*pow(10,p);//as p is 0 for the very first loop the remainder will be at units place in octal value and then p is incremented 
        //to 1 so that the in next loop the remainder will be at tens place 
        p++;
    }
    printf("Octal value of %d is %d",num2,oct);
    return 0;
}