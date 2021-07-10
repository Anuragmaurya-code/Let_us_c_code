#include<stdio.h>
int main()
{
    int a;
    long int add;
    printf("Enter Five digit number");
    scanf("%d",&a);
    int b=a%10;//grabs last digit
    a=a/10;//to remove last digit and update number
    int c=a%10;
    a=a/10;
    int d=a%10;
    a=a/10;
    int e=a%10;
    a=a/10;
    add = a+b+c+d+e;
    printf("sum of digit %d",add);
}