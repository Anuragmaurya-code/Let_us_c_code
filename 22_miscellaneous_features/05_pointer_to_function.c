//defining pointer to a function
#include<stdio.h>
void display()
{
    printf("HELLO I AM IN FUNCTION");
}
int main()
{
    void (*fun_poi)();//pointer to  function whose return datatype is void
    fun_poi=display;//assinging adress of display funt to pointer
    (*fun_poi)();//invokes function
    return 0;


}