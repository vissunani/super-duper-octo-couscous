#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int num;
    char c;
    int i=0,a,arr[10]={0};
    fp=fopen("text.txt","r");
    while((c=getc(fp))!=EOF)
    {
        num=(int)c;
        if(num==-1)
            break;
        arr[i]=num-48;
        i++;
    }
    for (i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
