#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a;
    vector<int>v,parent,child;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    for(i=0;i<v.size();i++)
    {
        if(i==0)
        {
            int x=v[i];
            parent.push_back(x);
        }
        else
        {
            if(v[i]!=v[i-1])
        {
            int x=v[i];
            parent.push_back(x);
        }
        }
    }
    int first=0,last,counter=0;
    for(i=0;i<parent.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(v[j]==parent[i])
            {
                counter++;
            }
        }
        child.push_back(counter);
        counter=0;
    }
    for(i=0;i<parent.size();i++)
    {
        cout << parent[i] << " aparece " << child[i] << " vez(es)" << endl;
    }
}
