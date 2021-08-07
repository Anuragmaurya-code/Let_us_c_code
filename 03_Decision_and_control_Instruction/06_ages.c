#include<stdio.h>
int main()
{
    int ra,sa,aa;
    printf("Enter the age of ram : ");
    scanf("%d",&ra);
    printf("Enter the age of shyam : ");
    scanf("%d",&sa);
    printf("Enter the age of ajay : ");
    scanf("%d",&aa);
    if(ra<sa)
    {
        if(ra<aa)
            printf("ram ia youngest");
        else
            printf("ajay is youngest");
    }
    else
    {
        if(sa<aa)
            printf("shyam ia youngest");
        else
            printf("ajay is youngest");
    }

    return 0;
}