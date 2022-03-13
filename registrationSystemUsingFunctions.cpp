#include<bits/stdc++.h>
using namespace std;

bool checker(string &name , vector<string> &database , int i ){
    if((find(database.begin() , (database.end()) , name + to_string(i))) != database.end()){ // name is present
        return 1;
    }
    else if((find(database.begin() , (database.end()) , name + to_string(i))) == database.end()){ // names is absent
        return 0;
    }
}

void presentAbsent(string &name , vector<string> &database ){ //will search the passed string in database

int i;

        if(checker(name , database , 0 ) ==1){
            for(i=1 ; i<=32 ; i++){
                if((checker ( name , database , i))==1){
                    i++;
                }
                else{
                    cout<<name<<i<<endl;
                    database.push_back(name + to_string(i));
                }
                break;
            }
        }
        else{
            cout<<"OK\n";
            database.push_back(name + to_string(i));
        }
}

void stru(vector<string> &database ){
    string name;
    cin>>name;

    presentAbsent(name , database );
}

int main(){
    int n;
    cin>>n;

    vector<string> database1;

    for(int k=0 ; k<n ; ++k){
        stru(database1 );
    }

}