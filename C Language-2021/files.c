#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char ch[100],c;
    fp = fopen("/media/byashwanth/others/c/contentsmatter.txt", "r");
    if (fp == NULL)
    {
        printf("FILE not found");
    }
    else
    {
        c = fgetc(fp);
        while (c != EOF)
        {
            printf("%c", c);
            c=getc(fp);
        }
    }
    fclose(fp);
}
