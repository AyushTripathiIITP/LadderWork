#include<bits/stdc++.h>
using namespace std; 

int mainFunction(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>v(n+1);
    //v[0]= 0 ;
    for(int i =1 ; i<=n ; i++){
        v[i] = v[i-1] + int(s[i-1] == 'W');
    }
    int res = INT_MAX ;
    for(int i = k ; i<=n ; i++){
    res = min(res , v[i] - v[i - k]);
    }
    cout<<res<<endl;
}
int main(){
   int t;
   cin>>t;
   while(t--){
    mainFunction();
   }
return 0;
}