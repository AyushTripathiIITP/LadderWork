#include<bits/stdc++.h>
using namespace std; 

void mainFunction(){
    int n;
    int ans(0);
    cin>>n;
    string ord;
    cin>>ord;
    for(int i=1 ; i< n ; i++){
        if(ord[i]== '0' && ord[i-1]== '0'){
            ans = ans + 2;
        }
    }
    for(int i=1 ; i<n-1 ; i++){
        if(ord[i+1]== '0' && ord[i]== '1' && ord[i-1]== '0'){
            ans =ans + 1;
        }
    }
    cout<< ans<<endl ;
}

int main(){
   int t;
   cin>> t;

   for(int i=0 ; i<t ; i++){
       mainFunction();
   }
return 0;
}