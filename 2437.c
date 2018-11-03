#include <stdio.h>
int main()
{
    int a,b,c,d,x;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x=(a-c)+(b-d);
    if(x<0)
    {
        printf("%d\n",x*(-1));
    }
    else
    {
        printf("%d\n",x);
    }
    return 0;
}
