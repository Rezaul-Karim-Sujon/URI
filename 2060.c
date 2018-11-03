#include <stdio.h>
int main()
{
    int n,a,i,two=0,three=0,five=0,four=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            two++;
        }
        if(a%3==0)
        {
           three++;
        }
        if(a%5==0)
        {
            five++;
        }
        if(a%4==0)
        {
            four++;
        }
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",two,three,four,five);
    return 0;
}
