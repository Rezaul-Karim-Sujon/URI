#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(;;)
    {
        int n,i,j,start=0,en=0;
    cin >> n;
    if(n==0)
    {
        break;
    }
    else
    {
    for(i=1;;i*=2)
    {
        if(start==n)
        {
            start=0;
            break;
        }
        else
        {
            for(j=i;;j*=2)
        {
            if(en==n)
            {
                en=0;
                break;
            }
            else
            {
            cout << j << " ";
            }
            en++;
        }
        cout << '\n';
        start++;
        }
    }
    cout << '\n';
    }
    }
}
