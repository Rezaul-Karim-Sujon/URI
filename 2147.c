#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,a;
    char ch[10000];
    double ans;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",ch);
        a=strlen(ch);
        ans=a*.01;
        printf("%.2lf\n",ans);
    }
    return 0;
}
