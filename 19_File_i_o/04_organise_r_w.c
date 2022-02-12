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
    fprintf(fp," %c %d        %s",'A',12,"Anurag");
    fclose(fp);
    fp=fopen("sample_file.txt","r");
    if(fp==NULL)
    {
        printf("Cannot open file");
        exit(1);
    }
    char k;
    int i;
    char val[20];
    fscanf(fp," %c %d %s",&k,&i,&val);
    fclose(fp);
    printf(" value hai - %c %d %s",k,i,val);
    return 0;
}