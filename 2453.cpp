#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,a,counter=0;
    getline(cin,s);
    a=s.size();
    for(i=0;i<a;i++)
    {
        counter++;
        if(s[i]== ' ')
        {
            counter=0;
            printf(" ");
        }
        else
        {
            if(counter%2==0)
            {
                printf("%c",s[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
