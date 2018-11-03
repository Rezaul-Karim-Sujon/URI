#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin >> n;
    getchar();
    for(int j=1; j<=n; j++)
    {
        stack <char >Stack;
        int counter=0;
        getline(cin,s);

        if(s.empty()== true)
        {
            cout << "1" << endl;
        }
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                if(!Stack.empty() && Stack.top()=='<' && s[i]=='>')
                {

                    Stack.pop();

                    counter++;
                }
                else if(s[i]!= '.')
                {
                    Stack.push(s[i]);
                }

            }

            cout << counter << endl;
        }
    }
    return 0;
}
