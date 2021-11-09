#include<stdio.h>
#define LOWER_CASE(x) (97<=x && x<=122?1:0)
//upper same as lower
//alphabet same
#define BIG(x,y) (x>y?printf("%d  is BIG",x):printf("%d is BIG"),y)

int main()
{
    (LOWER_CASE('h')?printf("Yes is small\n"):printf("No its not small\n"));
    BIG(7,4);
    return 0;
}