#include <stdio.h>
#include <math.h>
#define M_PI 3.14159
int main()
{
    int a,b,c,d;
    double x,y;
   for(;;)
   {
        scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==0 && b==0 && c==0 && d==0)
    {
        break;
    }
    else
    {
        x=2*(a+b);
    y=(2*M_PI*c)+(2*M_PI*d);
    if(x<y)
    {
        printf("N\n");
    }
    else
    {
        printf("Y\n");
    }
    }
   }
   return 0;
}
