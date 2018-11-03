#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,counter=0,b;
    cin >> n >> a;
    for(i=0;i<n;i++)
    {
        cin >> b;
        if(b>a)
            counter++;
    }
    cout << counter << endl;
    return 0;
}
