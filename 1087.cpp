#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(;;)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1==0 and y1==0 and x2==0 and y2==0)
        {
            return 0;
        }
        else
        {
               if(x1==x2 && y1==y2)
               {
                   cout << "0" << endl;
               }
               else if(abs(x1-x2)==abs(y1-y2) || x1==x2 || y1==y2)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "2" << endl;
            }
        }
    }
}
