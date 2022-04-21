#include<bits/stdc++.h>
using namespace std; 

int mainFunction(){
    long long int n;
    cin>>n;
    vector<long long int>arr;
    for(long long int i =0 ; i < n ; i++){
        long long int num;
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin() , arr.end());
    long long int fast,slow=0,flag=0,x;
    for( fast = 1 ; fast < arr.size() - 1 ; fast++){
        if(arr[slow] == arr[fast] && arr[slow] == arr[fast+1]){
            flag = 1;
            x = arr[slow];
        }
        else{
            ++slow;
        }
    }
    if(flag == 1){
        cout<<x<<endl;
    }
    else{
    cout<<"-1\n";
    }
return 0;
}

int main(){
   long long int t;
   cin>>t;
   while(t != 0){
       mainFunction();
       t--;
   }
return 0;
}