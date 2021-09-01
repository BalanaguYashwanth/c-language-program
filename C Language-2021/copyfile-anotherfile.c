#include<stdio.h>
void main()
{
    FILE* fptr;
    FILE* fptr1;
    int ch;
    fptr=fopen("/media/byashwanth/others/c/file1.txt","r");
    fptr1=fopen("/media/byashwanth/others/c/file.txt","w");
    while((ch=fgetc(fptr))!=EOF)
    {
        fputc(ch,fptr1);
    } 
    //fputs("hello all",fptr);
    fclose(fptr);
}
