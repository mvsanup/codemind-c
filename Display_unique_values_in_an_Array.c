
#include<stdio.h>
int repeated(int *arr,int x,int n)
{
    int j,c=0;
    for(j=0;j<n;j++)
    {
        if(x==arr[j])
        {
            c++;
        }
    }
    if(c==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,arr[100],i,x,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        x=arr[i];
        if(repeated(arr,x,n))
        {
            printf("%d ",arr[i]);
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}
