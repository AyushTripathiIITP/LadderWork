#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int u(0);
    cin>>n;
    int teams[2][n];
    for(int i=0 ; i<n ; ++i){
        cin>>teams[0][i]>>teams[1][i];
    }

    //comparing the home uniforms with guest uniforms
    for(int i=0 ; i<n ; ++i){
        for(int r=0 ; r<n ; ++r){
            if(teams[0][i] == teams[1][r]){
                ++u;
            }
        }
    }

    //comparing the guest uniform of each with home uniforms of each team
    //for(int i=0 ; i<n ; ++i){
    //    for(int r=0 ; r<n ; ++r){
    //        if(teams[1][i]==teams[0][r]){
    //            ++u;
    //        }
    //    }
    //}

    cout<<u;
}