#include<bits/stdc++.h>
using namespace std; 

int mainfunction(){
    int n;
    cin>>n;
    int s[n] , f[n];
    for(int i = 0 ; i< n ; i++){
        cin>>s[i];
    }
    for(int i = 0 ; i< n ; i++){
        cin>>f[i];
    }
    for(int i=1 ; i<n ; i++){
        if(s[i] < f[i-1]){
            s[i] = f[i - 1];
        }
    }
    for(int i = 0 ; i< n ; i++){
        cout<<f[i] - s[i]<<" ";
    }
    cout<<endl;
}
int main(){
   int t;
   cin>>t;
   while(t--){
       mainfunction();
   }
return 0;
}