#include <stdio.h>
int main()
{
    int a,n,i,reg;
    double b,max;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%lf",&a,&b);
        if(i==1)
        {
            max=b;
            reg=a;
        }
        else
        {
            if(max<b)
            {
                max=b;
                reg=a;
            }
        }
    }
    if(max<8.00)
    {
        printf("Minimum note not reached\n");
    }
    else
    {
        printf("%d\n",reg);
    }
    return 0;
}
