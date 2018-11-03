#include <stdio.h>
int main()
{
    long long int a,count=1,max,ans=0;
    while(scanf("%lld",&a)!=EOF)
    {
        if(count==1)
        {
            max=a;
        }
        else
        {
            if(max<a)
            {
                max=a;
                continue;
            }
            else
            {
                if(max>=ans)
                {
                    ans=max;
                }
                else
                {
                    ans=ans;
                }

            }
        }
        count++;
    }
    printf("%lld\n",ans+1);
}
