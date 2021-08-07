#include<stdio.h>
int main()
{
    char letter;
    printf("\n Enter a letter ");
    scanf("%c",&letter);
    if(letter>=65 && letter<=90)
        printf("Entered Character was capital letter"); 
    else if(letter>=97 && letter<=122)
        printf("Entered Character was small letter"); 
    else if(letter>=48 && letter<=57)
        printf("Entered Character was digit"); 
    else if(letter>=0 && letter<=47 || letter>=58 && letter<=64 || letter>=91 && letter<=96 || letter>=123 && letter<=127)
        printf("Entered Character was special symbol"); 
}