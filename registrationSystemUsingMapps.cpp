#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    map<string , int> database;

    while(n--){
        string s;
        cin>>s;

        if(database.count(s)==0){
            cout<<"OK\n";
            database[s]=1;
        }

        else{
            cout<<s<<database[s]<<endl;
            database[s] += 1;
        }
    }
}