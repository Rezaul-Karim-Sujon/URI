#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    cin >> a >> b >> x >>y;
    if((a*b)==(x*y))
    {
        cout << 0 << endl;
    }
    else if((a*b)<(x*y))
    {
        cout << 1 << endl;
    }
    else
        cout << -1 << endl;
    return 0;
}
