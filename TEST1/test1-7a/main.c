#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char p;
    FILE *fp;
    fp=fopen("text.txt","w");
    while((p=getc(stdin)!=EOF))
          {
              putc(p,fp);
          }
    fp=fopen("text.txt","r");
    while((p=getc(fp))!=EOF)
    {
        putc(p,stdout);
    }
    return 0;
}
