#include <stdio.h>
int main()
{
    long long int a,i,sum=0,j,n;
    scanf("%lld",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%lld",&a);
    sum=0;
    for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    if(a==sum)
    {
        printf("%lld eh perfeito\n",a);
    }
    else
    {
        printf("%lld nao eh perfeito\n",a);
    }
    }
    return 0;
}
