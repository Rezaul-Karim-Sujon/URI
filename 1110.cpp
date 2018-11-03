#define nl              "\n"
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define SIZE(a)           (int)a.size()
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
#define Abs(a)		abs(a)
#define input(a,b)	scanf("%lld%lld",&a,&b)
#define output(a)	printf("%lld",a);
#define mem(a)          memset(a,-1,sizeof a)
#define clr(a)          memset(a,0,sizeof a)



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    for(;;)
    {
        cin >> n;
        if(n==0)
        {
            printf("\n");
            return 0;
        }
        else
        {
            queue<int>Q;
    int i,a;
    vector<int>v;
    For(i,1,n)
    {

        Q.push(i);
    }
    while(!Q.empty())
    {
        v.push_back(Q.front());
        Q.pop();
        a=Q.front();
        Q.pop();
        Q.push(a);
    }
    printf("Discarded cards: ");
    if(v.size()==1)
    {
        printf("\n");
    }
    for(i=0;i<v.size()-1;i++)
    {
        cout << v[i];
        if(i==(v.size()-2))
        {
            printf("\n");
        }
        else
        {
            printf(", ");
        }
    }
    printf("Remaining card: %d\n",v[v.size()-1]);
        }
    }
}
