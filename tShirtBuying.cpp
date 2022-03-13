#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;

    vector<int> price;

    while(--n){
        cin>>a;
        price.push_back(a);
    }

    vector<int> frtcolr;

    while(--n){
        cin>>a;
        frtcolr.push_back(a);
    }

    vector<int> bkcolr;

    while(--n){
        cin>>a;
        bkcolr.push_back(a);
    }

    int buyers;
    cin>>buyers;

    vector<int> fvtcolr;

    while(--buyers){
        cin>>a;
        fvtcolr.push_back(a);
    }

    for(int i=0 ; i<buyers ; ++i){
        if(find(frtcolr.begin() , frtcolr.end() , fvtcolr[i]) != frtcolr.end())){

        }
    }

    int f;

    int a1[n*2];
    for(int i =0 ; i< n*2 ; i++){
        cin>>f;
        if(f==1){
            
        }
    }
}