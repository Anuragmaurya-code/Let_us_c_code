//not working domt know why
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fr,*fw;
    char ch;
    if(argc!=3)
    {
        puts("Improper format");
        exit(1);
    }
    fr=fopen(argv[1],"r");
    if(fr==NULL)
    {
        puts("Cannot open sourse file");
        exit(2);
    }
    fw=fopen(argv[2],"w");
    if(fw==NULL)
    {
        puts("Cannot open destination file");
        fclose(fr);
        exit(3);
    }
    while(1)
    {
        ch=fgetc(fr);
        if(ch==EOF)
            break;
        fputc(ch,fw);
    }
    fclose(fr);
    fclose(fw);
    return 0;
}