#include <stdio.h>
int main()
{
    double a,n[12]={100,50,20,10,5,2,1,.50,.25,.10,.05,.01},sum;
    int i,k;
    scanf("%lf",&a);
    for(i=0;i<12;i++)
    {
       k=a/n[i];
       if(i==0)
       {
           printf("NOTAS:\n");
           printf("%d nota(s) de R$ %.2f\n",k,n[i]);
           a=a-(k*n[i]);
       }
      else if(i>0 && i<6)
       {
           printf("%d nota(s) de R$ %.2f\n",k,n[i]);
            a=a-(k*n[i]);
        }
        else if(i==6)
        {
            printf("MOEDAS:\n");
            printf("%d moeda(s) de R$ %.2f\n",k,n[i]);
             a=a-(k*n[i]);
        }
        else if(i>6 && i<11)
        {
            printf("%d moeda(s) de R$ %.2f\n",k,n[i]);
            a=a-(k*n[i]);
        }
        else if(i==11)
        {
            a=a/n[11];
            printf("%.00lf moeda(s) de R$ %.2f\n",a,n[i]);
        }

    }
    return 0;
}

