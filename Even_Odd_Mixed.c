
#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0,d;
    scanf("%d",&n);
    d=(int)log10(n)+1;
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        {
            c++;
        }
        n/=10;
    }
    if(c==d)
    {
        printf("Even");
    }
    else if(c==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}

