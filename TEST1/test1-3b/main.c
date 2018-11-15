#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("text.txt","w");
    char s[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    fprintf(fp,"%s",s);
    return 0;
}
