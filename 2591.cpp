#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        string s;
        cin >> s;
        int start=0,end=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='k')
            {
                end=j+1;
                break;
            }
            else if(s[j]=='a')
            {
                start++;
            }
        }
        int end1=0;
        for(int j=end;j<s.size();j++)
        {
            if(s[j]=='a')
            {
                end1++;
            }
        }
        cout << "k";
        for(int j=1;j<=start*end1;j++)
        {
            cout << "a";
        }
        cout << '\n';

    }
}
