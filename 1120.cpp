#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(;;)
    {
        char c;
        int i;
        string s;
        int counter=0;
        cin >> c >> s;
        if(s=="0" && c=='0')
        {
            break;
        }
        else
        {
            vector<char>v;
            for(i=0;i<s.size();i++)
            {
                if(s[i]!=c)
                {
                    char x=s[i];
                    v.push_back(x);
                }
            }
            int counter=0;
            for(i=0;i<v.size();i++)
            {
                if(v[i]!='0')
                {
                    counter=1;
                    break;
                }
            }
            if(counter==1)
            {
                int couter=0;
                for(i=0;i<v.size();i++)
                {
                    if(couter==0 && v[i]!='0')
                    {
                        couter=1;
                        cout << v[i];
                    }
                    else if(couter==1)
                    {
                        cout << v[i];
                    }
                }
                cout << '\n';
                counter=0;
            }
            else if(counter==0)
            {
                cout << "0" << endl;
            }
        }
    }
}
