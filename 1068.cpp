#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin,s) && !cin.eof())
    {
        stack <char > Stack;
        for(int i=0;s[i];i++)
        {
            if(!Stack.empty() && Stack.top()=='(' && s[i]==')')
            {
                Stack.pop();
            }
            else if(s[i]=='(' || s[i]==')')
            {
                Stack.push(s[i]);
            }
        }
        if(!Stack.empty())
        {
            cout << "incorrect" << endl;
        }
        else
        {
            cout << "correct" << endl;
        }
    }
    return 0;
}
