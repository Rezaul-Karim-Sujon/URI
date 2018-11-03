#include <stdio.h>
int main()
{
    double a,b=1,c,s=0;
    for(a=1;a<=39;a+=2)
    {

        c=a/b;
        s+=c;
        b*=2;
        }
        printf("%.2lf\n",s);
        return 0;
}
