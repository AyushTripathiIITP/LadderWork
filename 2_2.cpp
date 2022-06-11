#include<bits/stdc++.h>
using namespace std; 
#define infinity 1e9 +7 

int mainFunction(){
    int n;
    cin>>n;
    int a[n] , b[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++){
        cin>>b[i];
    }
    int diff(infinity);
    for(int i=0 ; i < n ; i++){
        if(b[i] != 0){
            diff = min(diff , a[i] - b[i]);
        }
    }
    if(diff < 0){
        cout<<"NO\n";
        return 0;
    }
    else if(diff == infinity){
        cout<<"YES\n";
        return 0;
    }
    for(int i =0 ; i<n ; i++){
        if(a[i] - b[i] > diff){
            cout<<"NO\n";
            return 0;
        }
        else if(a[i] - b[i] < diff && b[i] != 0){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
}
int main(){
   int t;
   cin>>t;
   while(t--){
       mainFunction();
   }
return 0;
}