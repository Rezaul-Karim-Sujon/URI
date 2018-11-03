#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,avg,x;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    a=2*a;
    b=3*b;
    c=4*c;
    avg=(a+b+c+d)/10;
    printf("Media: %.1lf\n",avg);
    if(avg>=7.00)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg<=4.9)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5.00 && avg<=7.00)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&x);
        printf("Nota do exame: %.1lf\n",x);
        avg=avg+x;
        if(avg<=4.9)
        {
            printf("Aluno reprovado.\nMedia final: %.1lf\n",avg/2);
        }
        else
        {
            printf("Aluno aprovado.\nMedia final: %.1lf\n",avg/2);
        }
    }
    return 0;
}
