#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string c;
    cin>>s;
    int p(0);
    p= s.size();
    for(int i(0) ; i<p ; ++i){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            if( i != 0){
                cout<<" ";
            }
            i=i+2;
        }
        else{
        cout<< s[i];
        }
    }
    cout<<c;
}