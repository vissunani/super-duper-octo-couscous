#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    int count=0;
    FILE *fp;
    fp=fopen("text.txt","r");
    while ((ch=getc(fp))!=EOF)
    {
        if (ch=='b')
        {
            count++;
            printf("%c\t",ch);
        }
    }
    printf("\nNUMBER OF B'S=%d",count);
}
