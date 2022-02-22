#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,words=0;
    fgets(str,100,stdin);
    for (i=0;i<strlen(str);i++)
    {
        if (str[i]==' ')
        {
            words=words+1;
        }
    }
    printf("%d",words+1);
    return 0;
}