#include<stdio.h>
#include<stdarg.h>
int max(int tot_num,...)// ... indicates variale number of arguments
{
    int max,num;
    va_list ptr;//assigning pointer  type
    va_start(ptr,tot_num);//assign ptr to the first argument
    max=va_arg(ptr,int);//max is assignied argument pointed by ptr ptr is incremented to next argument on its own
    for(int i=1;i<tot_num;i++)
    {
        num=va_arg(ptr,int);//simple comparing with all arguments
        if(num>max)
            max=num;
    }
    return max;
}

int main()
{
    int m=max(3,9,32,69);
    printf("%d",m);
}