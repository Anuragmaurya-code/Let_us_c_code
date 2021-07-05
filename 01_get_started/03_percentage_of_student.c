#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5;
    printf("Enter the marks of your in 5 subject\n");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    float agg = (s1+s2+s3+s4+s5)/5;
    float per = (s1+s2+s3+s4+s5)/500*100;
    printf("your aggregate  : %f",agg);
    printf("your percentage : %f",per);
    return 0;

}