#include<bits\stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int i,r,a,b,c,p;
    int f(0);
    p = s.size();
    for(i=0 ; i<p ; i++){           // abcdefghijklmnopqrstuvwxyz
        if(s[i]=='h'){
            ++f ;
            break;
        }
    }
    for(r=i ; r<p ; ++r){
        if(s[r]=='e'){
            ++f ;
            break;
        }
    }
    for(a=r ; a<p ; ++a){
        if(s[a]=='l'){
            ++f;
            break;
        }
    }
    for(b=(a+1) ; b<p ; ++b){
        if(s[b]=='l'){
            ++f;
            break;
        }
    }
    for(c=b ; c<p ; ++c){
        if(s[c]=='o'){
            ++f;
            break;
        }
    }
    if(f==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}