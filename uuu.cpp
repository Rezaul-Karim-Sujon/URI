#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,mn;
    cin >> n >> m;
    mn=min(n,m);
    if(mn%2!=0)
    {
        cout << "Akshat" << endl;
    }
    else cout << "Malvika" << endl;
}
