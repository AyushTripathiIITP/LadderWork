#include<bits/stdc++.h>
using namespace std;

bool maximum(int a, int b)
{
    return(a<b);
}

bool minimum(int c, int d)
{
    return(c<d);
}


int main()
{
    long long a[5];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    long long q,w,e,r,t;
    q = a[0]+a[1]+a[2]+a[3] ;//not a[4] //1 2 3 4 5//10
    w = a[0]+a[1]+a[3]+a[4] ;//not a[2] //11
    e = a[1]+a[2]+a[3]+a[4] ;//not a[0] //14
    r = a[2]+a[0]+a[3]+a[4] ;//not a[1] //13
    t = a[0]+a[1]+a[2]+a[4] ;//not a[3] //11
    long long c = max(max(max(max(q,w),e),r),t);
    long long d = min(min(min(min(q,w),e),r),t);
    cout<<d<<" "<<c;  
}