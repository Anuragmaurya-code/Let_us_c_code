#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys\\types.h>
#include<sys\\stat.h>
int main()
{
    char buffer[512];
    int inhandle,outhandle,bytes;
    inhandle=open("sample_file.txt",O_RDONLY | O_BINARY);
    if(inhandle==-1)
    {
        puts("Cannot open file");
        exit;
    }
    outhandle=open("target_file.txt",O_RDWR | O_BINARY);
    if(outhandle==-1)
    {
        puts("Cannot open target file");
        exit;
    }
    while(1)
    {
        bytes=read(inhandle,buffer,512);
        if(bytes>0)
            write(outhandle,buffer,bytes);
        else
            break;
    }
    return 0;
}