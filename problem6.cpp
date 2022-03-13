#include<bits\stdc++.h>
using namespace std;

int main()
{
    double j(0),k(0),l(0),p(0);
    int n;
    cin>>n;
    double array[n];
    p= sizeof array/sizeof array[0];
    for(int i=0 ; i<n ; ++i)
    {
        cin>>array[i];
        if(array[i]<0)
        {
            ++j;
        }
        else if(array[i]>0)
        {
            ++k;
        }
        else
        {
            ++l;
        }
    }
    cout<<fixed<<setprecision(6)<<k/p<<endl;
    cout<<fixed<<setprecision(6)<<j/p<<endl;
    cout<<fixed<<setprecision(6)<<l/p<<endl;
return 0;
}