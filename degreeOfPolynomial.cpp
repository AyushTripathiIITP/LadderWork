#include<bits/stdc++.h>
using namespace std; 

void mainFunction(){
    int n,k(-1);
    cin>>n;
    int arr[n];
    for(int i=0 ; i < n ; i++){
        cin>>arr[i];
    }
    for(int i = n-1 ; i >= 0 ; i--){
        if(arr[i] == 0 ){
            n-- ;
        }
        else{
            break;
        }
    }
    cout << n - 1 << endl ; 
}
int main(){
   int t;
   cin>>t;
   while(t--){
       mainFunction();
   }
return 0;
}