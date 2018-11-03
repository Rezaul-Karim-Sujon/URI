#include <stdio.h>
int main()
{

    long long int a,i,n;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a);
        if(a%4==1)
        {
            printf("7\n");
        }
        else if(a%4==2)
        {
            printf("9\n");
        }
        else if(a%4==3)
        {
            printf("3\n");
        }
        else if(a%4==0)
        {
            printf("1\n");
        }
    }
    return 0;


}
