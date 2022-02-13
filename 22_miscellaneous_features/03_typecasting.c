//changing datatype
#include<stdio.h>
int main()
{
    int a=5,b=2;
    float c=a/b;
    printf("%f\n",c);//without typecasting as integer divide by integer is integer therfore value is 2 instead of 2.5
    c=(float)a/b;
    printf("%f",c);//after typecasting value becomes 2.5

}