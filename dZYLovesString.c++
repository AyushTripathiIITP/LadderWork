#include<bits/stdc++.h>
using namespace std; 

int main(){
   string s;
   cin>>s;

   int k;
   cin>>k;

   int kalpa = k;

   int base(0);

   map<int,int>g1;
   vector<int>alpha;


   for(int i=0 ; i< 26 ; i++){
       int num;
       cin>>num;
       g1.insert(pair<int,int>( 97 + i , num));
       alpha.push_back(num);
   }
   
   sort(alpha.begin() , alpha.end());

   int max= alpha[25];

   while(k !=0){
       base += max*(s.size() + k);
       --k;
   }

   for(int i=0 ; i< s.size() ; i++){
       int t = (int)s[i];
       auto it = g1.find(t);
       int value = it->second ;
       base += value*(i+1);
   }

   cout<<base<<"\n";
return 0;
}
