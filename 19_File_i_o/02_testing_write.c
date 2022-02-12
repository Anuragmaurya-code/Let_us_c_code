//fputc for writing char
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char s;
    fp=fopen("sample_file.txt","w");
    if(fp==NULL)
    {
        printf("Cannot open file");
        exit(1);
    }
    char another='Y';
    while(1)
    {
        printf("Enter a number or char\n");
        scanf("%c",&s);
        fputc(s,fp);
        break;
    }
    fclose(fp);
    return 0;
}