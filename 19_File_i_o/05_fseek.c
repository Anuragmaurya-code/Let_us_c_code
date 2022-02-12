#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }
int main()
{
    FILE *fp;
    char s[20];
    fp=fopen("sample_file.txt","rb+");
    if(fp==NULL)
    {
        printf("Cannot open file");
        exit(1);
    }
    fseek(fp,0,SEEK_END);//moves fp cursor 
    rewind(fp);//moves fp cursor to beginning
    fread(&s,sizeof(s),1,fp);
    printf("%s",s);
    
}