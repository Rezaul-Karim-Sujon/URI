#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000],n[1000];
    int a,b,c,d,j,k,l,m,sec1,sec2,sum;
    scanf("%s",s);
    scanf("%d",&a);
    scanf("%d : %d : %d",&b,&c,&d);
    scanf("%s",n);
    scanf("%d",&j);
    scanf("%d : %d : %d",&k,&l,&m);
    sec1=86400*a+3600*b+60*c+d;
    sec2=86400*j+3600*k+60*l+m;
    sum=sec2-sec1;
    a=sum/86400;
    printf("%d dia(s)\n",a);
    sum=sum%86400;
    a=sum/3600;
    printf("%d hora(s)\n",a);
    sum=sum%3600;
    a=sum/60;
    printf("%d minuto(s)\n",a);
    sum=sum%60;
    printf("%d segundo(s)\n",sum);
    return 0;
}
