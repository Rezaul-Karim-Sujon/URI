#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,sum=0;
    for(i=1;i<=9;i++)
    {
        cin >> a;
        sum+=a;
    }
    if(sum%9==1)
        cout << "Dasher" << endl;
    else if(sum%9==2)
    {
        cout << "Dancer" << endl;
    }
    else if(sum%9==3)
        cout << "Prancer" << endl;
    else if(sum%9==4)
        cout << "Vixen" << endl;
    else if(sum%9==5)
        cout << "Comet" << endl;
    else if(sum%9==6)
        cout << "Cupid" << endl;
    else if(sum%9==7)
        cout << "Donner" << endl;
    else if(sum%9==8)
        cout << "Blitzen" << endl;
        else if(sum%9==0)
        cout << "Rudolph" << endl;
    return 0;
}
