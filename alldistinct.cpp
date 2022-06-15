#include<bits/stdc++.h>
using namespace std; 

int mainFunction(){
    int n;
    cin>>n;
    set<int>arr;
    for(int i=0 ; i < n ; i++){
        int num;
        cin>>num;
        arr.insert(num);
    }
    if(n % 2 != 0 && arr.size() % 2 == 0){
        cout<<arr.size() - 1 <<endl;
    }
    else if(n % 2 == 0 && arr.size() % 2 != 0){
        cout<<arr.size() - 1 <<endl;
    }
    else{
        cout<<arr.size()<<endl;
    }
}
int main(){
   int t;
   cin>>t;
   while(t--){
    mainFunction();
   }
return 0;
}