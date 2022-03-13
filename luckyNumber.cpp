#include <bits\stdc++.h>
using namespace std;

int main()
{
    int x,i,d;
    cin>>x;
    int u = trunc(log(x))+1 ;
    int a,b;
    for (int w=0 ; w< u /* length of int */ ; w++)
    {
    if(x%10 == 4 || x%10 == 7)
    {
        ++i;
        x=x/10;
    }
    }
    if(/*a programes that scans the number if it contains only 4 and 7 or not*/)
    {
        cout<<"YES";
    }
    else if (i==4 || i==7)
    {
        cout<< "YES";
    }
    else
    {
        cout<< "NO";
    }
return 0;
}