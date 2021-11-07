#include<stdio.h>
#define HELLO
int main()
{
    #ifdef HELLO
    printf("Macros hello is defined");   
    #endif 
    #ifdef BOTTLE
    printf("Macros BOTTLE is defined");   
    #endif 

}