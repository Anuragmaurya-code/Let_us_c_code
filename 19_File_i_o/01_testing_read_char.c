//fgetc for reading char
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("sample_file.txt","r");
    while(1)
    {
        char ch=fgetc(fp);
        if(ch==EOF)
            break;
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}