#include<bits/stdc++.h>
using namespace std; 

int mainFunction(int n , vector<int>arr , vector<int>s){
    if(n ==0 || n==1){
        cout<< n;
        return 0;
    }
    else{
    int slow=0, fast=1 ;
    while(fast < n){
    if(arr[slow] != arr[fast]){
        s.push_back(arr[slow]);
        slow = fast ;
    }
    fast++;
    }
    s.push_back(arr[n-1]);
    cout<< s.size()<<endl;
    for(int i=0 ; i< s.size() ; i++){
        cout<< s[i]<<" ";
    }
    }
return 0;
//added a comment
}

int main(){
   int n;
   cin>>n;
   int w = n;
   vector<int>arr,s;

   while(n != 0){
       int num;
       cin>> num;
       arr.push_back(num);
       n-- ;
   }

   sort( arr.begin() , arr.end());

   mainFunction(w , arr , s);

return 0;
}