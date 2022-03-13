#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int x = s.length();
    int i,w;
    while(--x)
    {
        if(s[x]>'A' && s[x]<'Z' )
        {
            ++i;
        }
        else if(s[x]>'a' && s[x]<'z')
        {
            ++w;
        }
    if(i>w)
    {
        transform(s.begin(),s.end(),s.begin(), ::toupper); //command to convert to uppercase
    }
    else if(i<=w)
    {
        transform(s.begin(),s.end(),s.begin(), ::tolower); 

        //command to convert to lowercase
    }
    }
    cout << s ;
    return 0;
}