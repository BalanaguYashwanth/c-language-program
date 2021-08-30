#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE* fp;
    fp=fopen("/media/byashwanth/others/c/contentsmatter.txt","r"); // to write the file just change mode r to w+ and uncomment the fputs
    //fputs("hello all",fp);
    if(fp==NULL)
    {
        printf("the file not found");
    }
    else{

        char ch=fgetc(fp);
        while(ch!=EOF)
        {
            printf("\n %c \n ",ch);
            ch=fgetc(fp);
        }
    }
    fclose(fp);
}