#include<bits/stdc++.h>
using namespace std; 
#define l(a,b,c) for(int i=a ; i < b ; i = i + c)

void mainFunction(){
    int n;
    cin>>n;
    vector<int>deck;
    l(0,n,1){
        int num;
        cin>>num;
        deck.push_back(num);
    }
    int m;
    cin>>m;
    vector<int>shuffle;
    l(0,m,1){
        int mun;
        cin>>mun;
        shuffle.push_back(mun);
    }
    int k=0 ;
    for(int i=0 ; i<m ; i++){
        if(k < n){
        k += shuffle[i];
        }
        else{
            k=0;
        }
    }
    if(k < n){
        cout<< deck[k+1]<<endl;
    }
    else{
        cout<<deck[n - k ]<<endl;
    }
    // cout<<deck.front()<<endl;
}
int main(){
   int t;
   cin>>t;
   while(t--){
       mainFunction();
   }
return 0;
}