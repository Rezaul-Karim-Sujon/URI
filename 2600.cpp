#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,n,i;
scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f);
        if(a>0 && a<7 && b>0 && b<7 && c>0 && c<7 && d>0 && d<7 && e>0 && e<7 && f>0 && f<7)
        {
           if((a+f)==7 && (b+d)==7 && (c+e)==7 && a!=b && b!=c && c!=d && d!=e && e!=f && f!=a)
        printf("SIM\n");
        else
        {
            printf("NAO\n");
        }
        }
        else
        {
            printf("NAO\n");
        }

    }
    return 0;
}
