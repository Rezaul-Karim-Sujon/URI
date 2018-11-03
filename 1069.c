#include <stdio.h>
#include <string.h>
int main()
{
    char n[1000];
    int i,a,count=0,j,k,cout=0;
    scanf("%d",&k);
    for(j=1;j<=k;j++)
    {
        scanf("%s",n);
    a=strlen(n);
    count=0;
    cout=0;
    for(i=0;i<a;i++)
    {
        if(n[i]== '>')
        {
            count++;
        }
        else if(n[i]== '<')
        {
            cout++;
        }
    }
    if(cout>count)
    {
        printf("%d\n",count);
    }
    else if(count>cout)
    {
        printf("%d\n",count-cout);
    }
    else if(count==cout)
    {
        printf("%d\n",(cout+count)/2);
    }
    }
    return 0;
}
