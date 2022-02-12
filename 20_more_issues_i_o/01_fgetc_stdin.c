#include<stdio.h>
int main()
{
    FILE *fw,*fr;
    char ch;
    fw=fopen("Sample_file.txt","w");
    while(1)
    {
        ch=fgetc(stdin);
        if(ch==EOF)
            break;
        fputc(ch,fw);

    }
    

    return 0;
}