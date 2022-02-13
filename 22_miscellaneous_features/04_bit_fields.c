//bit field is to assign certain number of bit  to an unsigned variable
#include<stdio.h>
#define MALE 0;
#define FEMALE 1;
#define SINGLE 0;
#define MARRIED 1;
#define DIVORCED 2;
#define WIDOWED 3;

int main()
{
    struct person
    {
        unsigned gender : 1;//assigning gender variable 1 bit
        unsigned marr_status : 2;
    };
    struct  person p1;
    p1.gender=FEMALE;
    p1.marr_status=WIDOWED;
    printf("%d",p1.marr_status);
}