#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='.'|| s[i]==','||s[i]=='-')
        {
            cout << endl;
        }
        else
        {
            cout << s[i];
        }
    }
    cout << endl;
}
