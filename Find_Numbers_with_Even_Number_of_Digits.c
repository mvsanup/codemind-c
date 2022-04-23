
#include<stdio.h>
int iseven(int x)
{
    int s=0,d;
    
    while(x)
    {
        d=x%10;
        s++;
        x=x/10;
    }
    if(s%2==0)
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
    int n,arr[100],i,c=0,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        x=arr[i];
        if(iseven(x))
        {
            c++;
        }
    }
    printf("%d",c);
}
