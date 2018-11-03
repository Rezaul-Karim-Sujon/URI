#include <stdio.h>
int main()
{
    int s[5000];
    int i,n,j,a,count=1,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
         if(s[j]<s[i])
         {
             a=s[j];
             s[j]=s[i];
             s[i]=a;
         }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(s[i]==s[j])
            {
                count++;
                c=s[j];
            }
            else
            {
                c=s[i];
                b=count;
                count=1;
            }
        }
        printf("%d %d\n",c,b);

    }
}
