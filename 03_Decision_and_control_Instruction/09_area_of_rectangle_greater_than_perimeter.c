#include<stdio.h>
int main()
{
    int len,bre;
    printf("\nEnter lenth of retangle ");
    scanf("%d",&len);
    printf("\nEnter breath of retangle ");
    scanf("%d",&bre);
    if (2*(len+bre)<len*bre)
        printf("\nArea of rectangle with length=%d and breath=%d is greater than its perimeter",len,bre);
    else
        printf("\nArea of rectangle with length=%d and breath=%d is smaller than its perimeter",len,bre);
}