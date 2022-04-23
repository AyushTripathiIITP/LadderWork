#include<bits/stdc++.h>
using namespace std; 

int mainFunction(){
    string s;
    cin>>s;
    int a(0),b(0);
    for(int i =0 ; i<s.size()-2 ; i++){
        if(s[i] != s[i+1] && s[i] == s[i+2]){
            cout<<"NO\n";
            return 0;
        }
        else if(s[s.size()-1] != s[s.size() - 2]){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}

int main(){
   int t;
   cin>>t;
   while( t--){
       mainFunction();
   }
return 0;
}