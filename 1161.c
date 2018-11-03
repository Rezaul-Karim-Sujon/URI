#include <stdio.h>
int main()
{
    long long int m,n,i,fir=1,sec=1,j;
    while(scanf("%lld%lld",&m,&n)!=EOF)
    {
        fir=1;
        sec=1;
        for(i=1;i<=m;i++)
    {
        fir=fir*i;
    }
    for(i=1;i<=n;i++)
    {
        sec=sec*i;
    }
    printf("%lld\n",fir+sec);
    }
    return 0;
}
