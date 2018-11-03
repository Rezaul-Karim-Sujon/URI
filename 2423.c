#include <stdio.h>
int main()
{
    int s[3],i,a,j,x,y;
    for(i=1;i<=3;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=1;i<=3;i++)
    {
        for(j=i+1;j<=3;j++)
        {
            if(s[j]<s[i])
            {
                a=s[j];
                s[j]=s[i];
                s[i]=a;
            }
        }
    }
    x=s[3]-s[2];
    y=s[2]-s[1];
    if(x>=y)
    {
        printf("%d\n",x-y);
    }
    else
    {
        printf("%d\n",y-x);
    }
    return 0;
}
