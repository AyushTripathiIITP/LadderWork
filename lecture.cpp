#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,m;
   cin>>n>>m;
   vector<string> lang1;
   vector<string> lang2;
   vector<string> shortest;

   for(int i=0 ; i<m ; i++){
       string a,b;
       cin>>a>>b;
       int p= a.size();
       int q= b.size();
       lang1.push_back(a);
       lang2.push_back(b);
       if(p<= q){
           shortest.push_back(a);
       }
       else{
           shortest.push_back(b);
       }
   }

//    cout<< shortest[0]<<shortest[1]<<shortest[2];

   vector<string>sent;
   for(int i=0 ; i<n ; i++){
       string d;
       cin>>d;
       sent.push_back(d);
   }

   vector<string>correct;
   int ans;
   for(int i=0 ; i<n ; i++){
       auto it = find(lang1.begin() , lang1.end(), sent[i]);

    if(it != lang1.end()){
        ans = (it-lang1.begin());
        // cout<< ans ;
    correct.push_back(shortest[ans]);
    }
   }

//    cout<< correct.size();

   vector<string>::iterator it;
   for(it = correct.begin() ; it != correct.end() ; it++){
       cout<< *it <<" ";
   }
return 0;
}