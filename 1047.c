#include <stdio.h>
int main()
{
    int h1,m1,h2,m2,start,end,temp,h,m;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    start=h1*60+m1;
    end=h2*60+m2;
    if(end>start)
    {
        temp=end-start;
        h=temp/60;
        m=temp%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(end<=start)
    {
        temp=end-start+1440;
        h=temp/60;
        m=temp%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    return 0;
}
