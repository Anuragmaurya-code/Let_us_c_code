#include <stdio.h>
int main()
{
    char ch;
    while((ch=getc(stdin))!=EOF)// to redirect output  .\02_redirecting_output.exe > .\target_file.txt
        putc(ch,stdout);
    return 0;
}