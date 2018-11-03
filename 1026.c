#include <stdio.h>
int main()
{
    int a,i,n[1000],count=0,b,m[1000],cout=0,ans[1000];
    scanf("%d%d",&a,&b);
    while(a!=0)
    {
        n[count]=a%2;
        a=a/2;
        count++;
    }
    while(b!=0)
    {
        m[cout]=b%2;
        b=b/2;
        cout++;
    }
    for(i=0;i<cout;i++)
    {
        ans[i]=n[i]+m[i];
        if(ans[i]>1)
        {
            ans[i]=ans[i]-1;
        }
    }
    for(i=0;i<cout;i++)
    {
        printf("%d",ans[i]);
    }
}
