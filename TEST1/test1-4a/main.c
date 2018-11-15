#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ch[200];
    int count=0;
    FILE *fp;
    fp=fopen("text.txt","a");
    printf("ENTER YOUR LINE");
    scanf("%[^\n]s",ch);
    fprintf(fp,"%s\n",ch);
}
