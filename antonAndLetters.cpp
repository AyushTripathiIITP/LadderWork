#include<bits/stdc++.h>
using namespace std;
string s;
    
int check(char a , int l){
    int e(0);
    for(int x=1 ; x< l ; x+=2 ){
        if(s[x] != a){
            ++e;
        }
    }
    cout<<e;
}


int main(){
    cin>>s;
    int length;
    length = (s.size()-1);
    int e(0);
    
    //for(int i=1 ; i<length ; i +=2){
    e += check(s[1] , length);
    //}
    
    cout<<e;
}