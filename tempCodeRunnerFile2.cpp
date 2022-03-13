#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    cin >> n; //number of such tripletes
    for (int w=0; w<n ; w++)
    {
        cin>>a>>b>>c;
    }
    int z;
    if (c<=b || c>=a)
    {
    z=c;
    cout << z;
    }
    else
    cout <<"0";
    cout << "never"; //i am adding a comment to my this file so that a modified and unstaged version of this file gets created
    
    return 0;
}