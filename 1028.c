#include <stdio.h>
int main()
{
    int a,b,i,ans,n,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%d%d",&a,&b);
    if(a<b)
    {
        for(i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            ans=i;
        }
    }
    printf("%d\n",ans);
    }
    else if(b<a)
    {
        for(i=1;i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            ans=i;
        }
    }
    printf("%d\n",ans);
    }
    else if(a==b)
    {
        printf("%d\n",a);
    }
    }
return 0;
}
