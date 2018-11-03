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
        int counter=0;
        if(s[0]=='R' && s[1]=='A')
        {
            for(int j=2;j<s.size();j++)
            {
                if(s[j]>='0' && s[j]<='9')
                {
                    if(s[j]=='0' && counter==0)
                    {
                        continue;
                    }
                    else
                    {
                        counter=1;
                        cout << s[j];
                    }
                }
                else
                {
                    cout << "INVALID DATA";
                    break;
                }
            }
            cout << '\n';
            counter=0;

        }
        else
        {
            cout << "INVALID DATA" << endl;
        }
    }
}
