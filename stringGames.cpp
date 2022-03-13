#include<bits/stdc++.h>

using namespace std;

void check(int pos, string str , string o){
    string t;
    t= str;
    while(t.size() != 0){
    t.erase((pos-1) , 1 );
    cout<<t<<endl;
    }

}

int main(){
    string s;
    cin>>s;
    string p;
    cin>>p;
    int w;
    w = s.size();
    int position[w];
    for(int i=0 ; i<w ; ++i){
        cin>>position[i];
    }
    // a function to check for any x

    check(position[i],s,p);
}