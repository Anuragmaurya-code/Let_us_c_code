//renaming datatype
#include<stdio.h>
int main()
{
    //renaming data type
    typedef int INT;//renaming  datatye of int to INT using typedef
    INT a=5;
    printf("%d\n",a);
    struct rectangle
    {
        INT len;
        INT bre;
    };
    typedef struct rectangle REC;//renaming  datatye of struct rectangle to REC using typedef
    REC r1;
    r1.bre=2;
    r1.len=5;
    printf("%d",r1.len*r1.bre);

}