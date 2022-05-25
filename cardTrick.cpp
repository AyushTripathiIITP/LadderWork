#include<bits/stdc++.h>
using namespace std; 
#define ll long long

void mainFunction(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0 ; i<n ; i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    ll int m,sum(0);
    cin>>m;
    int shuffle[m];
    for(int i=0 ;i<m ; i++){
        cin>>shuffle[i];
        sum += shuffle[i];
    }
    //int sum = accumulate(arr.begin() , arr.end() , 0);
    int a = sum % n ;
    cout<< arr[a]<<endl ;
}
int main(){
   int t ;
   cin>>t;
   while(t--){
       mainFunction();
   }
return 0;
}