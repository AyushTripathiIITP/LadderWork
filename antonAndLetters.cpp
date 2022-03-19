#include<bits/stdc++.h>
using namespace std; 

int main(){
    string s;
    getline(cin,s);
    set<char> output;
    for(int i=0 ; i< s.size() ; i++){
        if(s[i]>= 'a' && s[i]<= 'z')
        output.insert(s[i]);
    }
    cout<< output.size();
return 0;
}