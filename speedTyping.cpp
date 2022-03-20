#include<bits/stdc++.h>
using namespace std; 

int mainFunction(int i){
    string j;
    int flag(0);
    cin>>j ;
    string p;
    cin>>p;
    for(int i=0 ; i< p.size() ; i++){
        if(p[i] != j[i]){
            ++flag;
            p.erase(p.begin() + i);
            // cout<< p <<endl;
            i= -1 ;
        }
        else{
            continue;
        }
    }
    if(p.size() != 0 && p==j){
        cout<<"Case #"<<i+1<<": "<<flag<<"\n";
        return 0;
    }
    else if(p.size() == 0 || p != j ){
        cout<<"Case #"<<i+1<<": IMPOSSIBLE \n";
        return 0;
    }
}

int main(){
   int t;
   cin>>t;
   for(int i=0 ; i<t ;i++){
       mainFunction(i);
   }
return 0;
}