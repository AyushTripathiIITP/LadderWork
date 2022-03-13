#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long result;
    result=0;
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0 ; i<n ;i++)
    {
        cin>>a[i];
        result += a[i];
    }
    cout<<result;
return 0;
}