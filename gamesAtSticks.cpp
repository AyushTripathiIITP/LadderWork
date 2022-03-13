#include<bits\stdc++.h>
using namespace std;

void machine(int p, int q ){
    int u(0);
    for(int i=0 ; i<max(p,q) ; ++i){
    int poi;
    poi= (p-i)*(q-i) ;
    if(poi>0){
        ++u;
    }
    }
    if(u%2==1){
        cout<<"Akshat";
    }
    else if(u%2==0){
        cout<<"Malvika";
    }
    }


int main(){
    int u(0);
    int n,m; //declaration of horizontal and vertical bars
    cin>>n>>m;
    //code for evaluating the winner
    machine(n,m);
}