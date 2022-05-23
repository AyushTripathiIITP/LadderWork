#include<bits/stdc++.h>
using namespace std; 

void mainFunction(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0 ; i<4 ; i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin() , arr.end() );
    cout<< arr.back() <<endl ;
}
int main(){
   int t;
   cin>>t;

   while(t--){
       mainFunction();
   }
return 0;
}