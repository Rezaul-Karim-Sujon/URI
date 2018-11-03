#include <stdio.h>
int main()
{
    double a,i,sum=0,avg=0;
    int count=0;
    for(;;)
    {
        scanf("%lf",&a);
        if(a==2)
        {
            break;
        }
        else
        {
            if(a>=0 && a<=10)
            {
                sum+=a;
                count++;
                if(count==2)
                {
                    printf("media = %.2lf\n",sum/2);
                   printf("novo calculo (1-sum 2-nao\n");
                   for(;;)
                   {
                       scanf("%lf",&i);
                   if(i==1)
                   {
                       average(i);
                   }
                   else if(i==2)
                   {
                       break;
                   }
                   else
                   {
                        printf("novo calculo (1-sum 2-nao\n");
                        continue;
                   }
                   }
                }
            }
            else
            {
                printf("nota invalida\n");
            }
        }
    }
}
