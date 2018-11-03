#include <stdio.h>
int main()
{
    int a,n[10],i;
    scanf("%d",&a);
    n[0]=a;
    for(i=1;i<10;i++)
    {
        n[i]=n[i-1]*2;
    }
    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}
