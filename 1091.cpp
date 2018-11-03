#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,x,y,X,Y;
   for(;;)
   {
        cin >> k;

    if(k==0)
    {
        break;
    }
    else
    {
        cin >> n >> m;
        for(i=1;i<=k;i++)
    {
        cin >> x >> y;
        X=x-n;
        Y=y-m;
        //cout << X << " " << Y << endl;
        if(X==0 || Y==0)
        {
            printf("divisa\n");
        }
        else if(X>0 && Y>0)
        {
            printf("NE\n");
        }
        else if(X<0 && Y<0)
        {
            printf("SO\n");
        }
        else if(X>0 && Y<0)
        {
            printf("SE\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    }
   }
   return 0;
}
