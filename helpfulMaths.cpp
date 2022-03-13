#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   string t;
   cin>>s;
   for(int i=0 ; i< s.size() ; i++){
       if(s[i] != '+'){
           t.push_back(s[i]);
       }
       sort(t.begin() , t.end());
   }
   cout<<t[0];
      for(int i=1 ; i< t.size() ; i++){
          cout<< '+' << t[i];
      }

}