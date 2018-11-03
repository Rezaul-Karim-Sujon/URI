#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,counter=0,z/*s[10001]*/;

    for(;;)
    {
        scanf("%lld",&n);
        if(n==0)
        {
            break;
        }
        else
        {
     vector<long long int >s;
        counter=0;
    for(int i=0;i<n;i++)
    {
        //scanf("%lld",&s[i]);
        cin >> z;
        s.push_back(z);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                counter++;
                long long int x=s[i];
                s[i]=s[j];
                s[j]=x;
            }
        }
    }
    if(counter%2!=0)
    {
        cout << "Marcelo" << endl;
    }
    else
    {
        cout << "Carlos" << endl;
    }
        }
    }
    return 0;
}
