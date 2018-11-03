#include <bits/stdc++.h>
using namespace std;


int place(char cha)
{
    if(cha=='^')
    {
        return 5;
    }
    else if(cha=='*' || cha=='/')
    {
        return 4;
    }
    else if(cha=='+' || cha=='-')
    {
        return 2;
    }
    else
        return -1;
}
int main()
{
    int n,test;
    cin >> n;
    for(test=0;test<n;test++)
    {
        stack<char>S;
    string s,ans;
    cin >> s;
    int i;
    char ch=')';
    s+=ch;
    S.push('(');
    for(i=0;i<s.size();i++)
    {
        if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')|| (s[i]>='0' && s[i]<='9'))
        {
            ch=s[i];
            ans+=ch;
        }
        else if(s[i]=='(')
        {
            S.push(s[i]);
        }
        else if(s[i]==')')
        {
            while(S.top()!='(')
            {
                ch=S.top();
                ans+=ch;
                S.pop();
            }
            S.pop();
        }
        else
        {
            while(place(s[i])<=place(S.top()))
            {
                ch=S.top();
                ans+=ch;
                S.pop();
                //S.push(s[i]);
            }
                S.push(s[i]);


        }
    }
    cout << ans << endl;
    }
}
