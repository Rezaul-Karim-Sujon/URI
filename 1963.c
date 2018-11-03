#include <stdio.h>
int main()
{
    double a,b,x;
    scanf("%lf%lf",&a,&b);
    x=(b-a)*100;
    printf("%.2lf%%\n",x/a);
    return 0;
}
