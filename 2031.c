#include <stdio.h>
#include <string.h>
int main()
{
    char n[100],s[100];
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%s%s",n,s);
    if(strcmp(n,s)==0)
    {
        if(strcmp(n,"ataque")==0)
        {
            printf("Aniquilacao mutua\n");
        }
        else if(strcmp(n,"pedra")==0)
        {
            printf("Sem ganhador\n");
        }
        else if(strcmp(n,"papel")==0)
        {
            printf("Ambos venceram\n");
        }
    }
    else
    {
        if((strcmp(n,"ataque")==0)||(strcmp(s,"ataque")==0))
        {
            if(strcmp(n,"ataque")==0)
            {
                printf("Jogador 1 venceu\n");
            }
            else if(strcmp(s,"ataque")==0)
            {
                printf("Jogador 2 venceu\n");
            }
        }
        else if((strcmp(n,"papel")==0)||(strcmp(s,"papel")==0))
        {
            if(strcmp(s,"papel")==0)
            {
                printf("Jogador 1 venceu\n");
            }
            else if(strcmp(n,"papel")==0)
            {
                printf("Jogador 2 venceu\n");
            }
        }
    }
    }
    return 0;
}
