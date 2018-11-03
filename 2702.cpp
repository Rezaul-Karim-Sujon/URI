#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z,sum=0;
    cin >> a >> b >> c >> x >> y >> z;
    if(a<x)
    {
        sum+=(x-a);
    }
    if(b<y)
        sum+=(y-b);
    if(c<z)
        sum+=(z-c);
    cout << sum << endl;
}
