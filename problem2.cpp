#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,result;
    cin>>n;
    int ar[n];
    result=0;
    for(int i=0 ; i<n ; ++i)
    {
        cin>>ar[i];
        result += ar[i];
    }
    cout<< result;
return 0;
}