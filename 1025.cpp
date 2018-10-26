#include <bits/stdc++.h>
using namespace std;
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0);
#define fread           freopen("input.txt","r",stdin);
#define fwrite          freopen("output.txt","w",stdout);
#define nl              "\n"
#define ll              long long
#define ull             unsigned long long
#define mk              make_pair
#define pb              push_back
#define sz(a)           (int)a.size()
#define pii             pair<int,int>
#define pLL             pair<ll,ll>
#define mem(a)          memset(a,-1,sizeof a)
#define clr(a)          memset(a,0,sizeof a)
#define all(a)          a.begin(),a.end()
#define UNIQUE(a)       sort(all(a)),a.erase(unique(all(a)),a.end())
#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())
#define ff              first
#define ss              second
#define sq(a)           ((a)*(a))
#define For(i,a,b)      for(int i=a;i<=b;i++)
#define Rof(i,a,b)      for(int i=a;i>=b;i--)
#define Rep(i,b)        for(int i=0;i<b;i++)
#define MOD             1000000007
#define PI              acos(-1.0)
#define eps             1e-9
#define Linf            2e18
#define inf             1<<30
#define MX5             100005
#define MX6             1000006
#define GCD(a,b)	__gcd(a,b)



int main()
{
    int n,q,a,b,i,j;
   for(j=1;;j++)
   {
        cin >> n >> q;
    if(n==0 && q==0)
    {
        break;
    }
    else
    {
        cout << "CASE# "<< j << ":" << endl;
        vector<int>v;
    For(i,1,n)
    {
        cin >> a;
        v.pb(a);
    }
    SORT(v);
    For(i,1,q)
    {
        cin >> b;

        int first=0,last=v.size()-1,mid,counter=0,place;
        while(first<=last)
        {
            mid=(first+last)/2;
            if(v[mid]==b)
            {
                counter=1;
                place=mid+1;
                break;
            }
            else if(v[mid]>b)
            {
                last=mid-1;
            }
            else if(v[mid]<b)
            {
                first=mid+1;
            }
        }
        if(counter==1)
        {
            int place1,k;

            for(int k=0;k<place;k++)
            {
                if(b==v[k])
                {
                    place1=k+1;
                    break;
                }
            }
            cout << b << " found at " << place1 << endl;
        }
        else
        {
            cout << b << " not found" << endl;
            counter=0;
        }
    }
    }
   }
}
