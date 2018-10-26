#include <stdio.h>
#include <string.h>
int main()
{
    char n[1000];
    int i,d,a;
    scanf("%s",n);
    a=strlen(n);
    for(i=0;i<a;i++)
    {
        d=n[i];
        if(d>=65 && d<=90)
        {
            n[i]=d+3;
        }
        else if(d>=97 && d<=122)
        {
            n[i]=d+3;
        }
    }
    for(i=0;i<a;i++)
    {
        printf("%c",n[i]);
    }
}
