#include <stdio.h>
#include <string.h>
int main()
{
    double n[12][12],avg,sum=0;
    int i,j,count=0;
    char c[2];
    scanf("%s",c);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&n[i][j]);
        }
    }
    for(i=1;i<12;i++)
    {
        for(j=12-i;j<12;j++)
        {
            sum+=n[i][j];
            count++;
        }
    }
    if(strcmp(c,"S")==0)
    {
        printf("%.1lf\n",sum);
    }
    else if(strcmp(c,"M")==0)
    {
        avg=sum/count;
        printf("%.1lf\n",avg);
    }
    return 0;
}
