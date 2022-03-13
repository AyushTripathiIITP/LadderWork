#include<bits/stdc++.h>
using namespace std; 

int main(){
   int n;
   cin>>n;

   int x;
   cin>>x;

   set<int>xx;

   if(x!=0){
   for(int i=0 ; i<x ; i++){
       int p;
       cin>>p;
       xx.insert(p);
   }
   }
   int y;
   cin>>y; 
   for(int i=x ; i<y+x ; i++){
       int q;
       cin>>q;
       xx.insert(q);
   }
   vector<int>xx1;
   xx1.assign(xx.begin() , xx.end());

   if(xx1.size()== n){
       cout<<"I become the guy.\n";
   }
   else{
       cout<<"Oh, my keyboard!\n";
   }
return 0;
}