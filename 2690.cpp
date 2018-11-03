#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,j,counter=0;
    cin >> n;
    getchar();
   for(int i=0;i<n;i++)
   {
        getline(cin,s);
    int a=s.size();
    counter=0;
    for(j=0;j<a;j++)
    {
        if(counter<12)
        {
            if(s[j]=='G' || s[j]=='Q' || s[j]=='a' || s[j]=='j' || s[j]=='u')
        {
            printf("0");
            counter++;
        }
        else if(s[j]=='I' || s[j]=='S' || s[j]=='b' || s[j]=='l' || s[j]=='v')
        {
            printf("1");

        counter++;
        }
        else if(s[j]=='E' || s[j]=='O' || s[j]=='Y' || s[j]=='c' || s[j]=='m' || s[j]=='w')
        {
          printf("2");
          counter++;
        }
        else if(s[j]=='F' || s[j]=='P' || s[j]=='Z' || s[j]=='d' || s[j]=='n' || s[j]=='x')
        {
           printf("3");
           counter++;
        }
        else if(s[j]=='J' || s[j]=='T' || s[j]=='e' || s[j]=='o' || s[j]=='y' || s[j]=='x')
        {
           printf("4");
           counter++;
        }
        else if(s[j]=='N' || s[j]=='X' || s[j]=='f' || s[j]=='p' || s[j]=='z'  || s[j]=='D')
        {
            printf("5");
            counter++;
        }
        else if(s[j]=='A' || s[j]=='K' || s[j]=='U' || s[j]=='g' || s[j]=='q')
        {
            printf("6");
            counter++;
        }
        else if(s[j]=='C' || s[j]=='M' || s[j]=='W' || s[j]=='h' || s[j]=='r')
        {
            printf("7");
            counter++;
        }
        else if(s[j]=='B' || s[j]=='L' || s[j]=='V' || s[j]=='i' || s[j]=='s')
        {
            printf("8");
            counter++;
        }
        else if(s[j]=='H' || s[j]=='R' || s[j]=='j' || s[j]=='t')
        {
            printf("9");
            counter++;
        }

        }
        else
        {
            printf("\n");
            break;
        }
     }
   //  printf("\n");
   }
   return 0;
}
