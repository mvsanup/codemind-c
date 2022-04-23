
#include<stdio.h>
int main()
{
    int r,c,mat[10][10],i,j,sum=0;
    scanf("%d",&r);
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum+=mat[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}
