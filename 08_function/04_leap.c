#include<stdio.h>
void leap(int);

int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    leap(year);
    return 0;
}
void leap(int y)
{
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                printf("Its a leap year");
            }
            else
            {
                printf("Its not a leap year");
            }
        }
        else
        {
            printf("Its a leap year");
        }

    }
    else
    {
        printf("Its not a leap year");
    }
}
