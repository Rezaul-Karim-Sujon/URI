#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,i,n;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> a;
        if(a%4==1)
        {
            cout << 7 << endl;
        }
        else if(a%4==2)
        {
            cout << 9 << endl;
        }
        else if(a%4==3)
        {
            cout << 3 << endl;
        }
        else if(a%4==0)
        {
            cout << 1 << endl;
        }
    }
    return 0;
}
