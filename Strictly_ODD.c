
#include<stdio.h>
int strictly_odd(int *a,int n)
{
    int i,o=0,oi=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            o++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0 && i%2!=0)
        {
            oi++;
        }
    }
    if(o==oi)
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
    int a[100],x,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=strictly_odd(a,n);
    if(x==1)
    {
        printf("True");
    }
    if(x==0)
    {
        printf("False");
    }
}




