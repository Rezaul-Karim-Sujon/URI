#include <bits/stdc++.h>
using namespace std;
#define REV(v)          reverse(v.begin(),v.end())
int main()
{
    int n,i,x,j;
    cin >> n;
    for(i=0;i<=n;i++)
    {
        string s;
        getline(cin,s);
        if(i==0)
        {
            continue;
        }
        else
        {
            for(j=0;j<s.size();j++)
            {
                if((s[j]>='A' && s[j]<='Z')|| (s[j]>='a' && s[j]<='z'))
                {
                    int x=s[j]+3;
                    s[j]=x;
                }
                else
                {
                    continue;
                }
            }
            reverse(s.begin(),s.end());

            int y=s.size()-1;
            for(j=0;j<=y/2;j++)
            {
               cout << s[j];
            }
            for(j=y/2+1;j<s.size();j++)
            {
                int x=s[j]-1;
                    s[j]=x;
                    cout << s[j];
                    if(j==y)
                    {
                        printf("\n");
                    }
            }
            cout << y/2 << endl;
        }
    }
}
