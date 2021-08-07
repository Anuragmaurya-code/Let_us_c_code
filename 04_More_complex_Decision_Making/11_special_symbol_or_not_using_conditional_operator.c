#include<stdio.h>
int main()
{
    char letter;
    printf("Enter a special symbol or not");
    scanf("%c",&letter);
    (letter>=33 && letter<=47?printf("The entered number is special letter"):printf("Entered number is not a special letter"));
    return 0;
}