#include <stdio.h>
int main()
{
    FILE *fr;
    char ch;
    fr=fopen("Sample_file.txt","r");;//to redirecting output type in cmd prompt -> program executable file > target file
    while ((ch=fgetc(fr))!=EOF)
        fputc(ch,stdout);
    return 0;
}