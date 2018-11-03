#include <stdio.h>
int main()
{
    int a,i,count=0,j;
    for(;;)
    {
        scanf("%d",&a);
        if(a==0)
        {
            break;
        }
        else
        {

                for(i=1;i<=a;i++)
            {
                count=0;
                if(i==1)
                {
                    continue;
                }
                else
                {
                    for(j=2;j<=i/2;j++)
                {
                    if(i%j==0)
                    {
                        count++;
                    }
                }
                if(count>0)
                {
                    printf("%d\n",i);
                    break;

                }
                else
                {
                    continue;
                }
                }
            }
           }

    }
    return 0;
}
