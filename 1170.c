#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    int i,count=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f",&a);
        count=1;
    for(;;)
    {
        a=a/2;
        if(a<=1)
        {
            printf("%d dias\n",count);
            break;
        }
        count++;
    }

    }
    return 0;
}
