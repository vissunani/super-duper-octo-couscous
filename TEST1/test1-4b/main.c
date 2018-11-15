#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
    int i=0,l,flag=0;
    char ch[100],a;
    fp=fopen("mytext.txt","a");
    printf("ENTER TEXT");
    scanf("%[^\n]s",ch);
    l=strlen(ch);
    while(i<l)
    {
        a=ch[i];
        if (a=='.')
        {
            flag=1;
            break;
        }
        i++;
    }
    if (flag==1)
        fprintf(fp,"%s\n",ch);
    else
    {
     fprintf(fp,"%s\n",ch);
       fprintf(fp,"%s\n",ch);
    }
    return 0;
}
