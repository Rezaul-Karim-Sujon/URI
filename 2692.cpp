#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    vector<char>v,w;
    char c,d;
    cin >> n >> m;
    for(i=0;i<n;i++)
    {
        cin >> c >> d;
        v.push_back(c);
        w.push_back(d);
    }
    string s;
    for(i=0;i<=m;i++)
    {
        getline(cin,s);
        for(int j=0;j<s.size();j++)
        {
            for(int k=0;k<w.size();k++)
            {
                if(w[k]==s[j])
                {
                    s[j]=v[k];
                    break;
                }
            }
        }
        for(int j=0;j<s.size();j++)
        {
            cout << s[j] ;
        }
        cout << '\n';
    }
}
