#include<bits/stdc++.h>
using namespace std; 
 
int mainFunction(){
    int n , r , b ;
    string ans = "";
    cin>>n>>r>>b;
    int set = r/(b+1);
    r -=  set*(b+1) ;
    for(int i =0 ; i < set ; i++){
        ans.push_back('R');
    }
    for(int j=0 ; j < b ; j++){
    if(r > 0){
        ans.push_back('R');
        r-- ;
    }
    ans.push_back('B');
    for(int i =0 ; i < set ; i++){
        ans.push_back('R');
    }
    }
    cout<< ans <<endl;
return 0;
    }
 
int main(){
   int t;
   cin>>t;
 
   while( t!= 0){
       t-- ;
       mainFunction();
   }
return 0;
}