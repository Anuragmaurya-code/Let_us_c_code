#include<stdio.h>
char* display()//function returning char address
{
    static char s[]="HELLO I AM IN FUNCTION";
    return(&s[0]);//returning string address
}
int main()
{
    char *p;//char address pointer
    p=display();
    for(int i=0;p[i]!='\0';i++)
        printf("%c",p[i]);   
    return 0;


}