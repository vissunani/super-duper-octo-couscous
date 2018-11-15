#include <stdio.h>
long int findSize(char file_name[])
{
    FILE* fp ;
    fp= fopen(file_name, "r");
    fseek(fp, 0L, SEEK_END);
    long int res = ftell(fp);
    fclose(fp);
    return res;
}
int main()
{
    char file_name[] = { "a.txt" };
    long int res = findSize(file_name);
    if (res != -1)
        printf("Size of the file is %ld bytes \n", res);
    return 0;
}
