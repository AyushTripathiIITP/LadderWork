#include<bits/stdc++.h>
using namespace std; 

int mainFunction(){
    int n;
    cin>>n;
    vector<int>alice,bob;
    for(int i=0 ; i <n ; i++){
        int num;
        cin>>num;
        alice.push_back(num);
    }
    int m;
    cin>>m;
    for(int j=0 ; j < m ; j++){
        int mun;
        cin>>mun;
        bob.push_back(mun);
    }
    sort(alice.begin() , alice.end());
    sort(bob.begin() , bob.end());
    //compare the largest number of each vector the one with maximum one is the winner
    //in case of equality the winner is the one who plays first
    if(alice.back() > bob.back()){
        cout<< "Alice\n"<<"Alice\n";
    }
    else if(bob.back() > alice.back()){
        cout<<"Bob\n"<<"Bob\n";
    }
    else if(bob.back() == alice.back()){
        cout<<"Alice\n"<<"Bob\n";
    }
}
int main(){
   int t;
   cin>>t;
   while(t--){
       mainFunction();
   }
return 0;
}