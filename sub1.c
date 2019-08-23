#include<stdio.h>
#include<string.h>
int main()
{
     char sub[100]="for",string[100]="geeksforgeeks";
     int i=0,j,temp[10],k=0,flag=0,p=0;

         for(j=0;j<=strlen(string);j++)
         {
             if(string[j]==sub[i])
             {
                 temp[p]=j;   //Taking the index of the substring
                 i++;         //iterate the substring
                 flag++;      //length of the substring
                 p++;

                 if(flag==strlen(sub))
                 {
                    k=strlen(sub);
                    printf("the substring is present");
                    printf("\n%d",temp[0]);              // Index of the substring
                    break;
                 }

             }
             else
                i=0;       // when ncondition is not satisfied then it points to strating of the substring
         }



}
