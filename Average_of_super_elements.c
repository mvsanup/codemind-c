#include<stdio.h>
bool res(int *b,int y)
{
    for(int i=0;i<sizeof(b);i++)
    {
        if(b[i]==y)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int k=0,b[n];
    float avg=0,c1=0;
    for(int i=0;i<n;i++)
    {
        if(res(b,a[i]))
            b[k++]=a[i];
    }
    for(int i=0;i<k;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
                c+=1;
        }
        if(c==b[i])
        {
            avg+=b[i];
            c1+=1;
        }
    }
    if(avg>0)
        printf("%.2f",avg/c1);
    else
        printf("-1");
}