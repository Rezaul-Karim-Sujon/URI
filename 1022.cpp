#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define For(i,a,b)      for(int i=a;i<=b;i++)
#define GCD(a,b)	__gcd(a,b)

int main()
{
    ll a,b,x,y,n,i,j,hor,lob;
    char c;
    cin >> n;
    For(i,1,n)
    {
        scanf("%d/%d",&a,&b);
        //getchar();
        cin >> c;
        //getchar();
        scanf("%d/%d",&x,&y);
        cout << y << endl;
        if(c=='+')
        {
            hor=b*y;
            cout << hor << endl;
            lob=(a*y)+(x*b);
            if(hor==lob)
            {
                printf("1 / 1 = 1 / 1\n");
            }
            else
            {
                int gcd=GCD(hor,lob);
                if(gcd==1)
                {
                    printf("%d/%d = %d/%d\n",lob,hor,lob,hor);
                }
                else
            printf("%d/%d = %d/%d\n",lob,hor,lob/gcd,hor/gcd);
            }
        }
        else if(c=='-')
        {
            hor=b*y;
            lob=(a*y)-(x*b);
            ll gcd=GCD(hor,lob);
            printf("%d/%d = %d/%d\n",lob,hor,lob/gcd,hor/gcd);
        }
        else if(c=='*')
        {
            hor=a*x;
            lob=b*y;
            ll gcd=GCD(hor,lob);
            printf("%d/%d = %d/%d\n",lob,hor,lob/gcd,hor/gcd);
        }
        else
        {
            lob=a*y;
            hor=b*x;
            ll gcd=GCD(hor,lob);
            printf("%d/%d = %d/%d\n",lob,hor,lob/gcd,hor/gcd);
        }
    }

    return 0;
}
