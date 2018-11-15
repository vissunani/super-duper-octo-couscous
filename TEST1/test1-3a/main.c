#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    int i=0;
    fp=fopen("myfile.txt","r");
    while(((ch=getc(fp))!=EOF) && (i<=99) && (ch!='\n'))
    {
        printf("%c",ch);
        i++;

    }
    return 0;
}
