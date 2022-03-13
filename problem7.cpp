#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int w=0 ; w<n ; ++w)
    {
        for(int e=0 ; e<n-w-1 ; e++)
        {
            cout<<" ";
        }
        for(int i=0 ; i<w+1 ; ++i)
        {
        cout<<"#";
        }
        cout<<"\n";
    }
return 0;
}