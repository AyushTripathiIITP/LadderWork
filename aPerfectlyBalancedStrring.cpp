#include<bits/stdc++.h>
using namespace std; 

int mainFunction(){
    string s;
    cin>>s;
    int len = s.size();
    set<char>diff;
    for(int i=0 ; i<len ; i++){
        diff.insert(s[i]);
    }
    vector<char>diff2(diff.begin() , diff.end());
    int nosOfFreq = diff.size();
    int arr[nosOfFreq]={0};
    for(int i =0 ; i< diff2.size() ; i++){
        for(int j=0 ; j< len ; j++){
            if(s[j]==diff2[i]){
                ++arr[i];
            }
        }
    }
    sort(arr , arr + nosOfFreq);
    if(abs(arr[nosOfFreq - 1] - arr[0])<=1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main(){
   int t;
   cin>>t;
   while(t != 0){
       t--;
       mainFunction();
   }
return 0;
}