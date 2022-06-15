#include<bits/stdc++.h>
using namespace std; 

int mainFunction(){
    char arr[8][8];
    for(int i=0 ; i < 8 ; i++){
        for(int j=0 ; j < 8 ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i < 6 ; i++){
        for(int j=0 ; j < 6 ; j++){
            if(arr[i][j] == '#' && arr[i][j+2]=='#' && arr[i+1][j+1] == '#' && arr[i+2][j]=='#' && arr[i+2][j+2]=='#'){
                cout<< i + 1 + 1 <<" "<< j + 1 + 1 <<endl;
                break;
            }
        }
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