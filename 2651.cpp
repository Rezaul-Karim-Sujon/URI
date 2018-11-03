#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int counter=0,i;
    cin >> s;
    long long int a=s.size();
    for( i=0;i<a;i++)
    {
        if((s[i]=='Z' || s[i]=='z') && (s[i+1]=='e' || s[i+1]=='E') && (s[i+2]=='l' || s[i+2]=='L') && (s[i+3]=='d' || s[i+3]=='D') && (s[i+4]=='a' || s[i+4]=='A'))
        {
             counter=1;
            break;
        }
        else
        {
             continue;
        }
    }
    if(counter==1)
    {
        cout <<"Link Bolado" << endl;
    }
    else if(counter==0)
    {
        cout << "Link Tranquilo" << endl;
    }
    return 0;
}
