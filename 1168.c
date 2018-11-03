#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000];
    long long int i,a,b,sum=0,n,j;
    scanf("%lld",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%s",s);
    b=strlen(s);
    sum=0;
    for(i=0;i<b;i++)
    {
        if(s[i]=='1')
        {
            sum+=2;
        }
        else if(s[i]== '0')
        {
            sum+=6;
        }
        else if(s[i]== '2')
        {
            sum+=5;
        }
        else if(s[i]== '3')
        {
            sum+=5;
        }
        else if(s[i]== '4')
        {
            sum+=4;
        }
        else if(s[i]== '5')
        {
            sum+=5;
        }
        else if(s[i]== '6')
        {
            sum+=6;
        }
        else if(s[i]== '7')
        {
            sum+=3;
        }
        else if(s[i]== '8')
        {
            sum+=7;
        }
        else if(s[i] == '9')
        {
            sum+=6;
        }
    }
    printf("%lld leds\n",sum);
    }
    return 0;
}
