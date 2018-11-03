#include <stdio.h>
int main()
{
    int h1,m1,h2,m2,start,end;
    for(;;)
    {
        scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }
        else
        {
            start=(h1*60)+m1;
            end=(h2*60)+m2;
            if(end>=start)
            {
                printf("%d\n",end-start);
            }
            else
            {
                end=end+1440;
                printf("%d\n",end-start);
            }
        }
    }
    return 0;
}
