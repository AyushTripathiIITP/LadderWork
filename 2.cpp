#include<bits\stdc++.h>
using namespace std;

int main(){
    string s;
    int p(0);
    cin>>s;
    int n=0;
    int i;
    n = s.size(); 
    if(n%2 ==0){
    for(i=0 ; i<(n/2) ; i++){
        if(s[i] != s[n-i-1]){
            ++p;
        }
    }
    if(p == 1){
        cout<<"YES";
    }

    else{
        cout<<"NO";
    }
    }
    else if(n%2==1){
    for(i=0 ; i< (n/2) ; i++){
        if(s[i] != s[n-i-1]){
            ++p;
        }
    }
    if(p == 1){
        cout<<"YES";
    }
    else if(p==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    }
}

