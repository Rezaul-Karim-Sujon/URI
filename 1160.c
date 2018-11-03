#include <stdio.h>
int main()
{
    long long int pa,pb,i,l,m;
    double g1,g2,x,y;
    scanf("%lld%lld%lf%lf",&pa,&pb,&g1,&g2);
    for(i=1;i<=10000000;i++)
    {
        x=i*pa*(g1/100);
        l=x+pa;
        y=i*pb*(g2/100);
        m=y+pb;
        if(l>m)
        {
            printf("%lld\n",i);
            break;
        }
    }
}
