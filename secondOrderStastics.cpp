#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

   set<int>seq;

   for(int i=0 ; i<n ; ++i){
       int input;
       cin>>input;
       seq.insert(input);
   }
   if(seq.size()==1){
       cout<<"NO";
   }
   else{
   set<int>::iterator it= seq.begin() ;
   for(int i=0 ; i<1 ; ++i){
       it++;
   }
   cout<< *it ;
   }
   
}