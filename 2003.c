#include <stdio.h>
int main()
{
    char ch;
    int a,b,min;
     while(scanf("%d%c%d",&a,&ch,&b)!=EOF)
    {
        min=(a*60)+b+60;
    if(min>=480)
    {
        printf("Atraso maximo: %d\n",min-480);
    }
    else
    {
        printf("Atraso maximo: 0\n");
    }
}
    return 0;
}
