#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,t;
    cin >> n >> t; //input number of children and time
    string s;
    cin >> s; //input string
    while(t--)
    {
       for(int i=0; i<n ; ++i) //sets the loop to scan each character
         {
           if (s[i]=='B' && s[i+1]=='G') //sets the condition for swaping
             {
             s[i]='G' ;
             s[i+1]='B' ;
             i++ ;
             }
         }
    }
    cout << s <<endl;
    return 0;
}