#include<bits/stdc++.h>
using namespace std; 

int main(){
   string s;
   cin>>s;

   vector<int>alpha;

   int k;
   cin>>k;

   for(int i=0 ; i<26 ; i++){
       int num;
       cin>>num;
       alpha.push_back(num);
   }

   sort(alpha.begin() , alpha.end());

   int max= alpha[25];
   int base(0);

   int maximizer = s.size() + k ;

   while(k !=0){
       base += max*(maximizer - k);
       --k;
   }

   cout<<base<<"\n";

return 0;
}