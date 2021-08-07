#include<stdio.h>
int main()
{
    float cc;
    int hd,ts;
    printf("Enter hardness,carbon content and tensile strength of steel \n");
    scanf("%d %f %d",&hd,&cc,&ts);
    
    if(hd>50 && cc<0.7 && ts>5600)
        printf("Grade is 10");
    else if(hd>50  && cc<0.7  && ts<=5600)
        printf("Grade is 9");
    else if(hd<=50 &&cc<0.7 && ts>5600)
        printf("Grade is 8");
    else if(hd>50 && cc>=0.7 && ts>5600)
        printf("Grade is 7");
    else if(hd>50 && cc>=0.7 && ts<=5600 || hd<=50 && cc<0.7 && ts<=5600 || hd<=50 && cc>=0.7 && ts>5600)
        printf("Grade is 6");
    else if(hd<=50 && cc>=0.7 && ts<=5600)
        printf("Grade is 5");
    return 0;
    
} 