#include <stdio.h>
int main()
{
    int a,b,tim;
    scanf("%d%d",&a,&b);
    if(a>b || a==0)
    {
        tim=24-a;
        printf("O JOGO DUROU %d HORA(S)\n",tim+b);
    }
    else if(b>a)
    {
        printf("O JOGO DUROU %d HORA(S)\n",b-a);
    }
    return 0;
}
