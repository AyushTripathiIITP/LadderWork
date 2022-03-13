include<bits\stdc++.h>
using namespace std; 


 
int main(){
    int n,m;

    cin>>n>>m;
 
    vector<int> t;
 
    t.push_back(1);
 
    while(m-- > 0){
        int it;
        cin>>it;
        t.push_back(it);
    }
 
    int time(0);
 
    for(int i=1 ; i<n ; ++i){
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