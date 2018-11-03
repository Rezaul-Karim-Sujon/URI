#include <stdio.h>
#include <string.h>
int main()
{
    char ch[2];
    int i,n,a,c=0,r=0,s=0,sum=0;
    float x,y,z,avg;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        scanf("%s",ch);
        if(strcmp(ch,"C")==0)
        {
            c+=a;
        }
        else if(strcmp(ch,"R")==0)
        {
            r+=a;
        }
        else if(strcmp(ch,"S")==0)
        {
            s+=a;
        }
    }
    sum=r+c+s;
    avg=sum;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",sum,c,r,s);
    x=(c*100)/avg;
    y=(r*100)/avg;
    z=(s*100)/avg;

    printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",x,y,z);
    return 0;

}
