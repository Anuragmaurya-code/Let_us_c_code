#include<stdio.h>
int main()
{
    char letter;
    printf("Enter a character lowercase or uppercase");
    scanf("%c",&letter);
    (letter>=65 && letter<=90?printf("The entered number is uppercase"):printf("Entered number is lowercase"));
    return 0;
}