#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,capital=0,hi=0,num=0,fail=0;
    string s;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> s;
        for(j=0;j<s.size();j++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                capital=1;
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                if(capital==0 || hi==0)
                {
                    fail=1;
                    break;
                }
                else
                {
                    num=1;
                }
            }
            else if(s[i]=='-')
            {
                if(capital==0)
                {
                    fail=1;
                    break;
                }
                else
                {
                    hi=1;
                }
            }
            else
            {
                fail=1;
                break;
            }
        }
        if(fail==1)
        {
            cout << "FAILURE" << endl;
        }
        else
        {
            int x=s.size();
            if(s[x-1]=='0' || s[x-1]=='9')
                cout << "FRIDAY" << endl;
            else if(s[x-1]=='1' || s[x-1]=='2')
            cout << "MONDAY" << endl;
                else if(s[x-1]=='3' || s[x-1]=='4')
                cout << "TUESDAY" << endl;
                else if(s[x-1]=='5' || s[x-1]=='6')
                cout << "WEDNESDAY" << endl;
                else if(s[x-1]=='7' || s[x-1]=='8')
                cout << "THURSDAY" << endl;
        }
        num=0;
        hi=0;
        fail=0;
        capital=0;
    }
}
