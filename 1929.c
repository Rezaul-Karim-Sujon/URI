#include <stdio.h>
int main()
{
    int n[4],i,j,a;
    for(i=0;i<4;i++)
    {
        scanf("%d",&n[i]);
    }
    if(n[0]<n[1]+n[2] || n[1]<n[2]+n[0] || n[2]<n[0]+n[1])
    {
        printf("S\n");
    }
    else
    {
        if(n[1]<=n[2]+n[3] || n[2]<=n[1]+n[3] || n[3]<=n[1]+n[2])
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}
