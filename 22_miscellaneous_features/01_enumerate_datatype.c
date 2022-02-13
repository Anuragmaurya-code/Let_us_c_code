#include<stdio.h>
enum mar_status
{
    single,married,divorsed,widowed
};
int main()
{
    enum mar_status p1,p2;
    p1=married;
    p2=widowed;
    printf("%d\n",p1);
    printf("%d",p2);
    
}