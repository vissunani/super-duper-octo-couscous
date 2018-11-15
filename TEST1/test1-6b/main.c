#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int main()
{
    int a,i;
    FILE *fp;
    fp=fopen("text.txt","w");
    srand(time(NULL));
    for (i=0;i<10;i++)
    {
    a=rand();
    putw(a,fp);
    }
      return 0;
}
