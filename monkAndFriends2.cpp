#include<bits/stdc++.h>
using namespace std; 


void mainFunction(){
    int n,m;
    cin>>n>>m;
    int x;

    vector<int> database;

    for(int i=0 ; i<n+m ; ++i){
        cin>>x;
        database.push_back(x);
    }

    for(int i=0 ; i<m ; i++){
    vector<int>::const_iterator it;
    
    it= find(database.begin() , database.begin()+n ,database.at(n+i));
    if(it != database.begin()+n){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    }
}

int main(){

    int t;
    cin>>t;
    for(int i=0 ; i<t ; ++i){
        mainFunction();
    }
return 0;
}