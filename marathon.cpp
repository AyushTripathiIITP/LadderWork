#include<bits/stdc++.h>
using namespace std; 

int mainFunction(){
    int arr[4];
    for(int i=0 ; i<4 ; i++){
        cin>>arr[i];
    }
    int a = arr[0];
    sort(arr , arr + 4);
    for(int i=0 ; i<4 ; i++){
        if(arr[i] == a){
            cout<< 4 - i - 1 <<endl;
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