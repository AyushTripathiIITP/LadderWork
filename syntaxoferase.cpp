#include <bits\stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >>s;
    char del ='A' ;
    s.erase(remove(s.begin(),s.end(), del) , s.end() );
    cout << s;
}