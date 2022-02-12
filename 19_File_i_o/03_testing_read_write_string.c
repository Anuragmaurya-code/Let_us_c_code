//fputs for writing string
//fgets for writing string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char s[20];
    fp=fopen("sample_file.txt","w");
    if(fp==NULL)
    {
        printf("Cannot open file");
        exit(1);
    }
    while((strlen(gets(s)))>0)
    {
        fputs(s,fp);
        fputs("\n",fp);
    }
    fclose(fp);
    fp=fopen("sample_file.txt","r");
    if(fp==NULL)
    {
        printf("Cannot open file");
        exit(1);
    }
    while(fgets(s,19,fp)!=NULL)
        printf("%s",s);

    fclose(fp);
    return 0;
}