#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if((a+b)>c && (b+c)>a && (a+c)>b)
    {
        if(a!=b && b!=c && c!=a)
        {
             if(((a*a)==(b*b)+(c*c)) || ((c*c)==(b*b)+(a*a)) || ((b*b)==(a*a)+(c*c)))
            cout << "r" << endl;
            else
            cout << "o" << endl;
        }

        else if(a==b || b==c || c==a)
            cout << "a" << endl;

    }
    else
    {
        cout << "n" << endl;
    }
    return 0;
}
