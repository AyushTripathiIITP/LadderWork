#include<bits/stdc++.h>
using namespace std;

void stru(vector<string> &database){
    string name;
    cin>>name;

    if((find(database.begin() , (database.end()) , name)) != database.end()){
        for(int i=1 ; i<32 ; i++){
            if((find(database.begin() , (database.end()) , name + to_string(i) ) != database.end())){
                i++;
            }
            else{
                cout<<name + to_string(i) <<endl;
                database.push_back(name + to_string(i));
            }
            break;
        }
    }

    else{
        cout<<"OK\n";
        database.push_back(name);
    }
}

int main(){
    int n;
    cin>>n;

    vector<string> database1;

    for(int k=0 ; k<n ; ++k){
        stru(database1);
    }

}