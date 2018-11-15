#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char word[50];
    FILE *fp;
    fp=fopen("test.txt","a");
    printf("ENTER -1 TO QUIT ");
    while (1)
    {
        printf("ENTER STRING:");
        scanf("%s",word);
        if ((strcmp(word,"-1"))==0)
            break;
        else
            fprintf(fp,"%s\n",word);
    }
}
