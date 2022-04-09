#include<bits/stdc++.h>
using namespace std; 

int main(){
   string s;
   cin>>s;

   int k;
   cin>>k;

   int base(0);

   map<int,int>g1;

   for(int i=0 ; i< 26 ; i++){
       int num;
       cin>>num;
       g1.insert(pair<int,int>( 97 + i , num));
   }

   for(int i=0 ; i< s.size() - 1 ; i++){
       int t = (int)s[i];
       auto it = g1.find(t);
       int value = it->second ;
       base += value*(i+1);
   }
 
    auto itr = g1.find((int)s[s.size() - 1]);
    int last = itr-> second ;
    base += last * (s.size() + k );

   cout<<base<<"\n";
return 0;
}
