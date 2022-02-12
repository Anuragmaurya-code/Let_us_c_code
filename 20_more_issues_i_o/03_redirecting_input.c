#include <stdio.h>
int main()
{
    FILE *fr;
    char ch;
    fr=fopen("Sample_file.txt","w");//to redirecting input type in cmd prompt -> program executable file < target file
    while ((ch=fgetc(stdin))!=EOF)
        fputc(ch,fr);
    return 0;
}