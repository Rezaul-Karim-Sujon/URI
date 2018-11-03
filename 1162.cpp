#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    scanf("%lld",&n);
    for(k=0;k<n;k++)
    {
        int l,i,j,a;
    vector<int>v;
    cin >> l;
    for(i=0;i<l;i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int counter=0;
    for(i=0;i<v.size();i++)
    {
        for(j=i+1;j<v.size();j++)
        {
            if(v[i]>v[j])
            {
                counter++;
                swap(v[i],v[j]);
            }
        }
    }
    printf("Optimal train swapping takes %d swaps.\n",counter);
    }
}
