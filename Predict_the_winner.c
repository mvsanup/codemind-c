
#include<stdio.h>
int main()
{
    int n,arr[100],i,x,y,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            x+=arr[i];
        }
        else
        {
            y+=arr[i];
        }
    }
    if(x>y)
    {
        d=x-y;
    }
    else
    {
        d=y-x;
    }
    if(d%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}
