#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long int n,m;
    cin>>n>>m;

    vector<int>t;

    t.push_back(1);
 
    for(int i=0 ; i<m ; i++){
        int it;
        cin>>it;
        t.push_back(it);
    }

    long long  time(0);

    for(int i=1 ; i<m+1 ; ++i){
    if(t[i]<t[i-1]){
        time=time+ (n-t[i-1]+t[i]);
        
    }
    else{
        time=time + (t[i]-t[i-1]);
    }
    }
    cout<<time<<endl;

return 0;
}